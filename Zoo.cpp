/*
 * Owen Milke
 * CS2300B
 */

#include "Zoo.h"

/**
 * The default Zoo constructor. Sets the capacity of the zoo to 10.
 */
Zoo::Zoo() : capacity(10) {}

/**
 * Gets the name of a zoo.
 * @return the name of a zoo.
 */
std::string Zoo::getZooName() const {
    return zooName;
}

/**
 * Gets the vector of different exhibits.
 * @return the vector of different exhibits.
 */
std::vector<Animal> Zoo::getExhibits() {
    return exhibitList;
}

/**
 * Sets the name of a zoo.
 * @param zooName The name of a zoo.
 */
void Zoo::setZooName(std::string zooName) {
    this->zooName = zooName;
}

/**
 * Removes an available exhibit/animal spot.
 */
void Zoo::loseCapacity() {
    capacity--;
}

/**
 * Creates a new exhibit/animal for the zoo.
 * @param animal The new animal to be added to the zoo.
 */
void Zoo::makeExhibit(Animal animal) {
    exhibitList.push_back(animal);
    loseCapacity();
}

/**
 * The play state of the zoo class.
 */
void Zoo::zooTime() {
    // Activates randomness for animal classes.
    srand(time(nullptr));

    // Default zoo constructor.
    Zoo zoo;

    // Determines if the game loop is finished.
    bool done = false;

    // A vector of unique pointers of type Animal that the user's custom animals will go into.
    std::vector<std::unique_ptr<Animal>> exhibits;

    /*
     * Start of the game loop.
     * Game continues until the user either quits initially, fills all 10 exhibit spots, or decides to stop creating
     * new animals for the zoo.
     */
    std::cout << "Welcome to the zoo building experience!" << std::endl;
    while (!done) {
        // Prompts the user to either create a new zoo (n), or to quit the program (q).
        char choice = getChoiceFromUser();
        // If-else statement that checks the user's input.
        if (choice == 'n') {
            // User chose to create a new zoo.
            std::cout << "\nWelcome to your new zoo!" << std::endl;
            // Asks for the user's name and uses it for the name of the zoo.
            zoo.setZooName(getUserName());
            // While loop that goes until the zoo's reaches capacity or the user decides to be done.
            while (zoo.capacity > 0) {
                // Tells the user how many available exhibit/animal spots remain.
                std::cout << "\nYou have " << zoo.capacity << " possible exhibits remaining." << std::endl;
                // Prompts the user for what animal they would like to add to the zoo or if they would like to finish adding animals.
                std::cout << "What exhibit would you like to make?" << std::endl;
                char exhibit = getAnimalFromUser();
                if (exhibit == 'g') {
                    // User choose to add a Giraffe to the zoo.
                    std::string name = getNameFromUser();
                    int age = getIntInput("Enter the animal's age in years (1 - 20): ", "Invalid input. Pick an age between from 0 to 20 ", 1, 20);
                    std::string likes = getLikesFromUser();
                    // Adds the user created Giraffe to the vector of unique pointers of type Animal and removes an exhibit from availability.
                    exhibits.push_back(std::make_unique<Giraffe>(name, age, likes));
                    zoo.loseCapacity();
                } else if (exhibit == 'o') {
                    // User choose to add an Otter to the zoo.
                    std::string name = getNameFromUser();
                    int age = getIntInput("Enter the animal's age in years (1 - 20): ", "Invalid input. Pick an age between from 0 to 20 ", 1, 20);
                    std::string likes = getLikesFromUser();
                    // Adds the user created Otter to the vector of unique pointers of type Animal and removes an exhibit from availability.
                    exhibits.push_back(std::make_unique<Otter>(name, age, likes));
                    zoo.loseCapacity();
                } else if (exhibit == 'm') {
                    // User chose to add a Monkey to the zoo.
                    std::string name = getNameFromUser();
                    int age = getIntInput("Enter the animal's age in years (1 - 20): ", "Invalid input. Pick an age between from 0 to 20 ", 1, 20);
                    std::string likes = getLikesFromUser();
                    // Adds the user created Otter to the vector of unique pointers of type Animal and removes an exhibit from availability.
                    exhibits.push_back(std::make_unique<Monkey>(name, age, likes));
                    zoo.loseCapacity();
                } else if (exhibit == 'l') {
                    // User chose to add a Lion to the zoo.
                    std::string name = getNameFromUser();
                    int age = getIntInput("Enter the animal's age in years (1 - 20): ", "Invalid input. Pick an age between from 0 to 20 ", 1, 20);
                    std::string likes = getLikesFromUser();
                    // Adds the user created Lion to the vector of unique pointers of type Animal and removes an exhibit from availability.
                    exhibits.push_back(std::make_unique<Lion>(name, age, likes));
                    zoo.loseCapacity();
                } else if (exhibit == 'p') {
                    // User chose to add a Penguin to the zoo.
                    std::string name = getNameFromUser();
                    int age = getIntInput("Enter the animal's age in years (1 - 20): ", "Invalid input. Pick an age between from 0 to 20 ", 1, 20);
                    std::string likes = getLikesFromUser();
                    // Adds the user created Penguin to the vector of unique pointers of type Animal and removes an exhibit from availability.
                    exhibits.push_back(std::make_unique<Penguin>(name, age, likes));
                    zoo.loseCapacity();
                } else if (exhibit == 'f') {
                    // User chose to finish adding animals to the zoo and ended the game loop.
                    zoo.capacity = 0;
                } else {
                    std::cout << "Error";
                }
            }

            // Completely finishes the game loop and prevents the original prompt from being shown again.
            done = true;

            /*
             * First, prints out the user's custom zoo entitled with their name they entered at the start of the program.
             * Then prints out all the unique animals the user created in a formatted state.
             * Displays each animal's name, age, and like as chosen by the user, as well as, a random, animal specific trait, and current activity.
             */
            std::cout << "\n\n\n\n\n" <<  zoo.getZooName() << "'s Zoo:\n" << std::endl;
            for (const auto & exhibit : exhibits) {
                std::cout << "| " << exhibit->getName() << " the " << exhibit->getType() << " | Age: " << exhibit->getAge() << " | Enjoys: " << exhibit->getLikes() << " |" << std::endl;
                std::cout << "Fun fact: " << exhibit->getName() << exhibit->getAttribute() << std::endl;
                std::cout << "What are they doing right now? | " << exhibit->getName() << exhibit->activity() << "\n" << std::endl;
            }

            // Uses the same formatting as before to write the user's zoo to a .txt file so that it can be accessed outside the program.
            std::string filename = zoo.getZooName() + "zoo.txt";
            std::ofstream outFile(filename);
            outFile << zoo.getZooName() << "'s Zoo:\n" << std::endl;
            for (const auto & exhibit : exhibits) {
                outFile << "| " << exhibit->getName() << " the " << exhibit->getType() << " | Age: " << exhibit->getAge() << " | Enjoys: " << exhibit->getLikes() << " |" << std::endl;
                outFile << "Fun fact: " << exhibit->getName() << exhibit->getAttribute() << std::endl;
                outFile << "What are they doing right now? | " << exhibit->getName() << exhibit->activity() << "\n" << std::endl;
            }
            outFile.close();

            // Thanks the user for playing and tells them how to find the .txt of their custom zoo.
            std::cout << "Thanks for playing! You can find your zoo in a .txt file with the name you entered ([name]zoo.txt)." << std::endl;
        } else if (choice == 'q') {
            // The user choose to quit the game at the start.
            std::cout << "\nGoodbye!";
            done = true;
        } else {
            std::cout << "\nError";
            done = true;
        }
    }
}

/**
 * Input validation for getting the user's name.
 * @return the name entered by the user after it has passed all input validation checks.
 */
std::string Zoo::getUserName() {
    std::string userWord;
    std::cout << "Enter your your first name: ";

    while (getline(std::cin, userWord)) {
        if (empty(userWord)) {
            std::cout << "No input. Enter your first name: ";
            std::cin.clear();
        } else if (userWord.find(' ') >= 0 && userWord.find(' ') <= userWord.length()) {
            std::cout << "Invalid input. Enter your first name: ";
            std::cin.clear();
        } else {
            break;
        }
    }

    return userWord;
}

/**
 * Input validation for getting the initial game choice from the user.
 * @return the character entered by the user after it has passed all input validation checks.
 */
char Zoo::getChoiceFromUser() {
    std::string userInput;
    char userChar;
    std::cout << "Enter 'n' to make a new zoo or 'q' to quit (case sensitive): ";

    while (getline(std::cin, userInput)) {
        if (empty(userInput)) {
            std::cout << "No input. Enter 'n' to make a new zoo or 'q' to quit: ";
            std::cin.clear();
        } else if (userInput.length() >= 2 || !isalpha(userInput[0]) || (userInput != "n" && userInput != "q")) {
            std::cout << "Invalid input. Enter 'n' to make a new zoo or 'q' to quit: ";
            std::cin.clear();
        } else {
            break;
        }
    }
    userChar = userInput[0];

    return userChar;
}

/**
 * Input validation for getting the animal choice from the user.
 * @return the character entered by the user after it has passed all input validation checks.
 */
char Zoo::getAnimalFromUser() {
    std::string userInput;
    char userChar;
    std::cout << "Enter 'g' for Giraffe, 'o' for Otter, 'm' for Monkey, 'l' for Lion, 'p' for Penguin, or 'f' to finish (case sensitive): ";

    while (getline(std::cin, userInput)) {
        if (empty(userInput)) {
            std::cout << "No input. Enter 'g', 'o', 'm', 'l', 'p', or 'f': ";
            std::cin.clear();
        } else if (empty(userInput) || userInput.length() >= 2 || !isalpha(userInput[0]) || (userInput != "g" && userInput != "o" && userInput != "m" && userInput != "l" && userInput != "p" && userInput != "f")) {
            std::cout << "Invalid input. Enter 'g', 'o', 'm', 'l', 'p', or 'f': ";
            std::cin.clear();
        } else {
            break;
        }
    }
    userChar = userInput[0];

    return userChar;
}

/**
 * Input validation for getting an animal's name from the user.
 * @return the chosen animal name entered by the user after it has passed all input validation checks.
 */
std::string Zoo::getNameFromUser() {
    std::string userWord;
    std::cout << "Enter the animal's name (one word): ";

    while (getline(std::cin, userWord)) {
        if (empty(userWord)) {
            std::cout << "No input. Enter the animal's name: ";
            std::cin.clear();
        } else if (userWord.find(' ') >= 0 && userWord.find(' ') <= userWord.length()) {
            std::cout << "Invalid input. Enter the animal's name: ";
            std::cin.clear();
        } else {
            break;
        }
    }

    return userWord;
}

/**
 * Input validation for getting a number within a range from the user (inclusive).
 * @param prompt The prompt that asks for a number within a range.
 * @param invalid The response if a user's input is invalid.
 * @param low The lowest number the user's input can be.
 * @param high The highest number the user's input can be.
 * @return the number entered by the user after it has passed all input validation checks.
 */
int Zoo::getIntInput(std::string prompt, std::string invalid, int low, int high) {
    std::cout << prompt;
    int choice = 0;
    std::string junk;
    while (!(std::cin >> choice) || choice < low || choice > high) {
        std::cout << invalid;
        std::cin.clear();
        getline(std::cin, junk);
    }
    std::cin.ignore(1, '\n');
    return choice;
}

/**
 * Input validation for getting an animal's likes from the user.
 * @return the chosen like for an animal entered by the user after it has passed all input validation checks.
 */
std::string Zoo::getLikesFromUser() {
    std::string userWord;
    std::cout << "Enter something the animal likes/likes doing (one word): ";

    while (getline(std::cin, userWord)) {
        if (empty(userWord)) {
            std::cout << "No input. Enter something the animal likes/likes doing: ";
            std::cin.clear();
        } else if (userWord.find(' ') >= 0 && userWord.find(' ') <= userWord.length()) {
            std::cout << "Invalid input. Enter something the animal likes/likes doing: ";
            std::cin.clear();
        } else {
            break;
        }
    }

    return userWord;
}
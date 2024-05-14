/*
 * Owen Milke
 * CS2300B
 */

#ifndef M2OEP_ZOO_H
#define M2OEP_ZOO_H

#include <cctype>
#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>
#include "Animal.h"
#include "Giraffe.h"
#include "Otter.h"
#include "Monkey.h"
#include "Lion.h"
#include "Penguin.h"

/**
 * A user customizable zoo that can house up to 10 animals of any of the 5 subtypes.
 * Includes functions for getting the name of a zoo, adjusting zoo capacity, creating a new exhibit/animal for the zoo,
 * as well as, input validation functions for the user's name, initial choice, animal choice, animal name choice,
 * integer choice in a range, and animal likes choice.
 * The main bulk of the game is located inside of the zooTime() function in order to increase readability in the main function.
 */
class Zoo {
private:
    /**
     * The zoo's name.
     */
    std::string zooName;

    /**
     * A list of animal exhibits.
     */
    std::vector<Animal> exhibitList;
public:
    /**
     * The default constructor.
     */
    Zoo();

    /**
     * The capacity of a zoo.
     */
    int capacity;

    /**
     * Gets the name of a zoo.
     * @return the name of a zoo.
     */
    std::string getZooName() const;

    /**
     * Gets the vector of different exhibits.
     * @return the vector of different exhibits.
     */
    std::vector<Animal> getExhibits();

    /**
     * Sets the name of a zoo.
     * @param zooName The name of a zoo.
     */
    void setZooName(std::string zooName);

    /**
     * Removes an available exhibit/animal spot.
     */
    void loseCapacity();

    /**
     * Creates a new exhibit/animal for the zoo.
     * @param animal The new animal to be added to the zoo.
     */
    void makeExhibit(Animal animal);

    /**
     * The play state of the zoo class.
     */
    void zooTime();

    /**
     * Input validation for getting the user's name.
     * @return the name entered by the user after it has passed all input validation checks.
     */
    std::string getUserName();

    /**
     * Input validation for getting the initial game choice from the user.
     * @return the character entered by the user after it has passed all input validation checks.
     */
    char getChoiceFromUser();

    /**
     * Input validation for getting the animal choice from the user.
     * @return the character entered by the user after it has passed all input validation checks.
     */
    char getAnimalFromUser();

    /**
     * Input validation for getting an animal's name from the user.
     * @return the chosen animal name entered by the user after it has passed all input validation checks.
     */
    std::string getNameFromUser();

    /**
     * Input validation for getting a number within a range from the user (inclusive).
     * @param prompt The prompt that asks for a number within a range.
     * @param invalid The response if a user's input is invalid.
     * @param low The lowest number the user's input can be.
     * @param high The highest number the user's input can be.
     * @return the number entered by the user after it has passed all input validation checks.
     */
    int getIntInput(std::string prompt, std::string invalid, int low, int high);

    /**
     * Input validation for getting an animal's likes from the user.
     * @return the chosen like for an animal entered by the user after it has passed all input validation checks.
     */
    std::string getLikesFromUser();
};

#endif
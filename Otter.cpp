/*
 * Owen Milke
 * CS2300B
 */

#include "Otter.h"

/**
 * The default Otter constructor. Sets tail length to 15.
 */
Otter::Otter() : Animal(), tailLength(15) {}

/**
 * The explicit constructor for an Otter.
 * @param name The Otter's name.
 * @param age The Otter's age.
 * @param likes Something the Otter likes.
 */
Otter::Otter(std::string name, int age, std::string likes) : Animal(name, age, likes), tailLength(rand() % (18 - 12 + 1) + 12) {}

/**
 * Gets the length of an Otter's tail.
 * @return the length of an Otter's tail.
 */
int Otter::getTailLength() const {
    return tailLength;
}

/**
 * Gets the unique Otter attribute. Overrides default Animal attribute.
 * @return the unique Otter attribute.
 */
std::string Otter::getAttribute() {
    return "'s tail is " + std::to_string(getTailLength()) + " inches long!";
}

/**
 * Gets the unique Otter type. Overrides default Animal type.
 * @return the unique Otter type.
 */
std::string Otter::getType() {
    return "Otter";
}

/**
 * Gets the unique Otter activity. Overrides default Animal activity.
 * @return the unique Otter activity.
 */
std::string Otter::activity() {
    if (getAge() < 2) {
        return " is sleeping in their den.";
    }
    if (rand() % 2) {
        return " is eating some fish.";
    }
    return " is splashing around in the water!";
}
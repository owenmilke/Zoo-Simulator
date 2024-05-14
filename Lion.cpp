/*
 * Owen Milke
 * CS2300B
 */

#include "Lion.h"

/**
 * The default Lion constructor. Sets body length to 6.
 */
Lion::Lion() : Animal(), bodyLength(6) {}

/**
 * The explicit constructor for a Lion.
 * @param name The Lion's name.
 * @param age The Lion's age.
 * @param likes Something the Lion likes.
 */
Lion::Lion(std::string name, int age, std::string likes) :Animal(name, age, likes), bodyLength(rand() % (7 - 5 + 1) + 5) {}

/**
 * Gets the body length of a Lion.
 * @return the body length of a Lion.
 */
int Lion::getBodyLength() const {
    return bodyLength;
}

/**
 * Gets the unique Lion attribute. Overrides default Animal attribute.
 * @return the unique Lion attribute.
 */
std::string Lion::getAttribute() {
    return " is " + std::to_string(getBodyLength()) + " feet long!";
}

/**
 * Gets the unique Lion type. Overrides default Animal type.
 * @return the unique Lion type.
 */
std::string Lion::getType() {
    return "Lion";
}

/**
 * Gets the unique Lion activity. Overrides default Animal activity.
 * @return the unique Lion activity.
 */
std::string Lion::activity() {
    if (getAge() < 3) {
        return " is sticking with the pack.";
    }
    if (rand() % 2) {
        return " is stalking their prey.";
    }
    return " is letting out a HUGE roar!";
}
/*
 * Owen Milke
 * CS2300B
 */

#include "Giraffe.h"

/**
 * The default Giraffe constructor. Sets neck length to 7.
 */
Giraffe::Giraffe() : Animal(), neckLength(7) {}

/**
 * The explicit constructor for a Giraffe. Sets neck length to a random integer between 6 and 8 (inclusive).
 * @param name The Giraffe's name.
 * @param age The Giraffe's age.
 * @param likes Something the Giraffe likes.
 */
Giraffe::Giraffe(std::string name, int age, std::string likes) : Animal(name, age, likes), neckLength(rand() % (8 - 6 + 1) + 6) {}

/**
 * Gets the length of a Giraffe's neck.
 * @return the length of a Giraffe's neck.
 */
int Giraffe::getNeckLength() const {
    return neckLength;
}

/**
 * Gets the unique Giraffe attribute. Overrides default Animal attribute.
 * @return the unique Giraffe attribute.
 */
std::string Giraffe::getAttribute() {
    return "'s neck is " + std::to_string(getNeckLength()) + " feet long!";
}

/**
 * Gets the unique Giraffe type. Overrides default Animal type.
 * @return the unique Giraffe type.
 */
std::string Giraffe::getType() {
    return "Giraffe";
}

/**
 * Gets the unique Giraffe activity. Overrides default Animal activity.
 * @return the unique Giraffe activity.
 */
std::string Giraffe::activity() {
    if (getAge() < 4) {
        return " is very sleepy.";
    }
    if (rand() % 2) {
        return " is eating some leaves.";
    }
    return " is peeking over the exhibit!";
}
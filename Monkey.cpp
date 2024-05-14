/*
 * Owen Milke
 * CS2300B
 */

#include "Monkey.h"

/**
 * The default Monkey constructor. Sets weight to 25.
 */
Monkey::Monkey() : Animal(), weight(25) {}

/**
 * The explicit constructor for a Monkey.
 * @param name The Monkey's name.
 * @param age The Monkey's age.
 * @param likes Something the Monkey likes.
 */
Monkey::Monkey(std::string name, int age, std::string likes) : Animal(name, age, likes), weight(rand() % (40 - 15 + 1) + 15) {}

/**
 * Gets the weight of a Monkey.
 * @return the weight of a Monkey.
 */
int Monkey::getWeight() const {
    return weight;
}

/**
 * Gets the unique Monkey attribute. Overrides default Animal attribute.
 * @return the unique Monkey attribute.
 */
std::string Monkey::getAttribute() {
    return " weighs " + std::to_string(getWeight()) + " pounds!";
}

/**
 * Gets the unique Monkey type. Overrides default Animal type.
 * @return the unique Monkey type.
 */
std::string Monkey::getType() {
    return "Monkey";
}

/**
 * Gets the unique Monkey activity. Overrides default Animal activity.
 * @return the unique Monkey activity.
 */
std::string Monkey::activity() {
    if (getAge() < 2) {
        return " is with their mom.";
    }
    if (rand() % 2) {
        return " is eating a banana.";
    }
    return " is learning to make tools!";
}
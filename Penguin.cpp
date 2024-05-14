/*
 * Owen Milke
 * CS2300B
 */

#include "Penguin.h"

/**
 * The default Penguin constructor. Sets height to 3.
 */
Penguin::Penguin() : Animal(), height(3) {}

/**
 * The explicit constructor for a Penguin.
 * @param name The Penguin's name.
 * @param age The Penguin's age.
 * @param likes Something the Penguin likes.
 */
Penguin::Penguin(std::string name, int age, std::string likes) : Animal(name, age, likes), height(rand() % (5 - 1 + 1) + 1) {}

/**
 * Gets the height of a Penguin.
 * @return the height of a Penguin.
 */
int Penguin::getHeight() const {
    return height;
}

/**
 * Gets the unique Penguin attribute. Overrides default Animal attribute.
 * @return the unique Penguin attribute.
 */
std::string Penguin::getAttribute() {
    return " is " + std::to_string(getHeight()) + " feet tall!";
}

/**
 * Gets the unique Penguin type. Overrides default Animal type.
 * @return the unique Penguin type.
 */
std::string Penguin::getType() {
    return "Penguin";
}

/**
 * Gets the unique Penguin activity. Overrides default Animal activity.
 * @return the unique Penguin activity.
 */
std::string Penguin::activity() {
    if (getAge() < 3) {
        return " is huddling with their family.";
    }
    if (rand() % 2) {
        return " is eating some squid.";
    }
    return " is sliding around on the ice!";
}
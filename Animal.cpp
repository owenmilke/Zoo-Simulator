/*
 * Owen Milke
 * CS2300B
 */

#include "Animal.h"

/**
 * The default Animal constructor.
 */
Animal::Animal() {}

/**
 * The specific Animal constructor.
 * @param name The animal's name.
 * @param age The animal's age.
 * @param likes Something the animal likes.
 */
Animal::Animal(std::string name, int age, std::string likes) {
    this->name = name;
    this->age = age;
    this->likes = likes;
}

/**
 * Gets the name of an animal.
 * @return the name of an animal.
 */
std::string Animal::getName() const {
    return name;
}

/**
 * Gets the age of an animal.
 * @return the age of an animal.
 */
int Animal::getAge() const {
    return age;
}

/**
 * Gets something the animal likes.
 * @return something the animal likes.
 */
std::string Animal::getLikes() const {
    return likes;
}

/**
 * Base method for an animal's specific attribute.
 * @return the base animal's specific attribute.
 */
std::string Animal::getAttribute() {
    return " is really cool!";
}

/**
 * Base method for an animal's type.
 * @return the base animal's type.
 */
std::string Animal::getType() {
    return "Animal";
}

/**
 * Base method for an animal's unique activity.
 * @return the base unique animal activity.
 */
std::string Animal::activity() {
    return " is just hanging out.";
}
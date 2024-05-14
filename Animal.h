/*
 * Owen Milke
 * CS2300B
 */

#ifndef M2OEP_ANIMAL_H
#define M2OEP_ANIMAL_H

#include <string>

/**
 * Class of an animal for the zoo that has numerous different subclasses.
 */
class Animal {
private:
    /**
     * The animal's name.
     */
    std::string name;

    /**
     * The animal's age.
     */
    int age;

    /**
     * Something the animal likes.
     */
    std::string likes;
public:
    /**
     * The default constructor.
     */
    Animal();

    /**
     * The virtual version of the default constructor.
     */
    virtual ~Animal() = default;

    /**
     * The explicit constructor for an Animal.
     * @param name The animal's name.
     * @param age The animal's age.
     * @param likes Something the animal likes.
     */
    explicit Animal(std::string name, int age, std::string likes);

    /**
     * Gets the name of an animal.
     * @return the name of an animal.
     */
    virtual std::string getName() const;

    /**
     * Gets the age of an animal.
     * @return the age of an animal.
     */
    virtual int getAge() const;

    /**
     * Gets something the animal likes.
     * @return something the animal likes.
     */
    virtual std::string getLikes() const;

    /**
     * Virtual method for Animal subclass specific attributes.
     * @return the Animal subclass specific attribute.
     */
    virtual std::string getAttribute();

    /**
     * Virtual method for the type of Animal subclass an Animal is.
     * @return the type of Animal subclass an Animal is
     */
    virtual std::string getType();

    /**
     * Virtual method for the unique activity that each Animal subclass has.
     * @return the unique activity that each Animal subclass has.
     */
    virtual std::string activity();
};

#endif
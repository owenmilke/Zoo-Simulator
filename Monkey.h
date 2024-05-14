/*
 * Owen Milke
 * CS2300B
 */

#ifndef M2OEP_MONKEY_H
#define M2OEP_MONKEY_H

#include "Animal.h"

/**
 * Monkey subclass of an Animal
 */
class Monkey : public Animal {
private:
    /**
     * The weight of a Monkey.
     */
    int weight;
public:
    /**
     * The default constructor.
     */
    Monkey();

    /**
     * The explicit constructor for a Monkey.
     * @param name The Monkey's name.
     * @param age The Monkey's age.
     * @param likes Something the Monkey likes.
     */
    explicit Monkey(std::string name, int age, std::string likes);

    /**
     * Gets the weight of a Monkey.
     * @return the weight of a Monkey.
     */
    int getWeight() const;

    /**
     * Gets the unique Monkey attribute. Overrides default Animal attribute.
     * @return the unique Monkey attribute.
     */
    std::string getAttribute() override;

    /**
     * Gets the unique Monkey type. Overrides default Animal type.
     * @return the unique Monkey type.
     */
    std::string getType() override;

    /**
     * Gets the unique Monkey activity. Overrides default Animal activity.
     * @return the unique Monkey activity.
     */
    std::string activity() override;
};

#endif
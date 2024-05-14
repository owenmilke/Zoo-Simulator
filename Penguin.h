/*
 * Owen Milke
 * CS2300B
 */

#ifndef M2OEP_PENGUIN_H
#define M2OEP_PENGUIN_H

#include "Animal.h"

/**
 * Penguin subclass of an Animal
 */
class Penguin : public Animal {
private:
    /**
     * The height of a Penguin.
     */
    int height;
public:
    /**
     * The default constructor.
     */
    Penguin();

    /**
     * The explicit constructor for a Penguin.
     * @param name The Penguin's name.
     * @param age The Penguin's age.
     * @param likes Something the Penguin likes.
     */
    explicit Penguin(std::string name, int age, std::string likes);

    /**
     * Gets the height of a Penguin.
     * @return the height of a Penguin.
     */
    int getHeight() const;

    /**
     * Gets the unique Penguin attribute. Overrides default Animal attribute.
     * @return the unique Penguin attribute.
     */
    std::string getAttribute() override;

    /**
     * Gets the unique Penguin type. Overrides default Animal type.
     * @return the unique Penguin type.
     */
    std::string getType() override;

    /**
     * Gets the unique Penguin activity. Overrides default Animal activity.
     * @return the unique Penguin activity.
     */
    std::string activity() override;
};

#endif
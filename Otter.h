/*
 * Owen Milke
 * CS2300B
 */

#ifndef M2OEP_OTTER_H
#define M2OEP_OTTER_H

#include "Animal.h"

/**
 * Otter subclass of an Animal
 */
class Otter : public Animal {
private:
    /**
     * The length of an Otter's tail.
     */
    int tailLength;
public:
    /**
     * The default constructor.
     */
    Otter();

    /**
     * The explicit constructor for an Otter.
     * @param name The Otter's name.
     * @param age The Otter's age.
     * @param likes Something the Otter likes.
     */
    explicit Otter(std::string name, int age, std::string likes);

    /**
     * Gets the length of an Otter's tail.
     * @return the length of an Otter's tail.
     */
    int getTailLength() const;

    /**
     * Gets the unique Otter attribute. Overrides default Animal attribute.
     * @return the unique Otter attribute.
     */
    std::string getAttribute() override;

    /**
     * Gets the unique Otter type. Overrides default Animal type.
     * @return the unique Otter type.
     */
    std::string getType() override;

    /**
     * Gets the unique Otter activity. Overrides default Animal activity.
     * @return the unique Otter activity.
     */
    std::string activity() override;
};

#endif
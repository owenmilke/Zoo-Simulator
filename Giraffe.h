/*
 * Owen Milke
 * CS2300B
 */

#ifndef M2OEP_GIRAFFE_H
#define M2OEP_GIRAFFE_H

#include "Animal.h"

/**
 * Giraffe subclass of an Animal.
 */
class Giraffe : public Animal {
private:
    /**
     * The length of a Giraffe's neck.
     */
    int neckLength;
public:
    /**
     * The default constructor.
     */
    Giraffe();

    /**
     * The explicit constructor for a Giraffe.
     * @param name The Giraffe's name.
     * @param age The Giraffe's age.
     * @param likes Something the Giraffe likes.
     */
    explicit Giraffe(std::string name, int age, std::string likes);

    /**
     * Gets the length of a Giraffe's neck.
     * @return the length of a Giraffe's neck.
     */
    int getNeckLength() const;

    /**
     * Gets the unique Giraffe attribute. Overrides default Animal attribute.
     * @return the unique Giraffe attribute.
     */
    std::string getAttribute() override;

    /**
     * Gets the unique Giraffe type. Overrides default Animal type.
     * @return the unique Giraffe type.
     */
    std::string getType() override;

    /**
     * Gets the unique Giraffe activity. Overrides default Animal activity.
     * @return the unique Giraffe activity.
     */
    std::string activity() override;
};

#endif
/*
 * Owen Milke
 * CS2300B
 */

#ifndef M2OEP_LION_H
#define M2OEP_LION_H

#include "Animal.h"

/**
 * Lion subclass of an Animal
 */
class Lion : public Animal {
private:
    /**
     * The body length of a Lion.
     */
    int bodyLength;
public:
    /**
     * The default constructor.
     */
    Lion();

    /**
     * The explicit constructor for a Lion.
     * @param name The Lion's name.
     * @param age The Lion's age.
     * @param likes Something the Lion likes.
     */
    explicit Lion(std::string name, int age, std::string likes);

    /**
     * Gets the body length of a Lion.
     * @return the body length of a Lion.
     */
    int getBodyLength() const;

    /**
     * Gets the unique Lion attribute. Overrides default Animal attribute.
     * @return the unique Lion attribute.
     */
    std::string getAttribute() override;

    /**
     * Gets the unique Lion type. Overrides default Animal type.
     * @return the unique Lion type.
     */
    std::string getType() override;

    /**
     * Gets the unique Lion activity. Overrides default Animal activity.
     * @return the unique Lion activity.
     */
    std::string activity() override;
};

#endif
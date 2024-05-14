/*
 * Owen Milke
 * CS2300B
 */

#include <iostream>
#include "Zoo.h"
#include "Animal.h"
#include "Giraffe.h"
#include "Otter.h"
#include "Monkey.h"
#include "Lion.h"
#include "Penguin.h"

using namespace std;

/*
 * Testing methods for Zoo, Animal, Giraffe, Otter, Monkey, Lion, and Penguin classes.
 * Returns true if there were no errors during testing, false otherwise.
 */
bool testZoo();
bool testAnimal();
bool testGiraffe();
bool testOtter();
bool testMonkey();
bool testLion();
bool testPenguin();

int main() {
    srand(time(nullptr));
    if (testZoo()) {
        cout << "Passed all Zoo test cases" << endl;
    }
    if (testAnimal()) {
        cout << "Passed all Animal test cases" << endl;
    }
    if (testGiraffe()) {
        cout << "Passed all Giraffe test cases" << endl;
    }
    if (testOtter()) {
        cout << "Passed all Otter test cases" << endl;
    }
    if (testMonkey()) {
        cout << "Passed all Monkey test cases" << endl;
    }
    if (testLion()) {
        cout << "Passed all Lion test cases" << endl;
    }
    if (testPenguin()) {
        cout << "Passed all Penguin test cases" << endl;
    }
    return 0;
}

/**
 * Testing method to see if Zoo class works as intended.
 * @return true if all tests pass, false otherwise.
 */
bool testZoo() {
    bool passed = true;
    Zoo zoo;
    Animal animal;
    if (zoo.getExhibits().size() != 0) {
        passed = false;
        cout << "Failed getExhibits test case" << endl;
    }
    zoo.makeExhibit(animal);
    if (zoo.getExhibits().size() != 1) {
        passed = false;
        cout << "Failed makeExhibit/getExhibits test case" << endl;
    }
    zoo.setZooName("My Zoo");
    if (zoo.getZooName() != "My Zoo") {
        passed = false;
        cout << "Failed setZooName/getZooName test case" << endl;
    }
    if (zoo.capacity != 9) {
        passed = false;
        cout << "Failed loseCapacity test case" << endl;
    }
    return passed;
}

/**
 * Testing method to see if Animal class works as intended.
 * @return true if all tests pass, false otherwise.
 */
bool testAnimal() {
    bool passed = true;
    Animal animal("Finlay", 12, "Sleeping");
    if (animal.getName() != "Finlay") {
        passed = false;
        cout << "Failed default getName test case" << endl;
    }
    if (animal.getAge() != 12) {
        passed = false;
        cout << "Failed default getAge test case" << endl;
    }
    if (animal.getLikes() != "Sleeping") {
        passed = false;
        cout << "Failed default getLikes test case" << endl;
    }
    if (animal.activity() != " is just hanging out.") {
        passed = false;
        cout << "Failed default activity test case" << endl;
    }
    if (animal.getType() != "Animal") {
        passed = false;
        cout << "Failed default getType case" << endl;
    }
    if (animal.getAttribute() != " is really cool!") {
        passed = false;
        cout << "Failed default getAttribute test case" << endl;
    }
    Animal animal2;
    if (animal2.activity() != " is just hanging out.") {
        passed = false;
        cout << "Failed default activity test case" << endl;
    }
    return passed;
}

/**
 * Testing method to see if Giraffe class works as intended.
 * @return true if all tests pass, false otherwise.
 */
bool testGiraffe() {
    bool passed = true;
    Giraffe giraffe("Jerry", 5, "Stargazing");
    if (giraffe.getName() != "Jerry") {
        passed = false;
        cout << "Failed alt getName test case" << endl;
    }
    if (giraffe.getAge() != 5) {
        passed = false;
        cout << "Failed alt getAge test case" << endl;
    }
    if (giraffe.getLikes() != "Stargazing") {
        passed = false;
        cout << "Failed alt getLikes test case" << endl;
    }
    if (giraffe.getNeckLength() > 8 || giraffe.getNeckLength() < 6) {
        passed = false;
        cout << "Failed getNeckLength test case" << endl;
    }
    if (giraffe.activity() == " is just hanging out.") {
        passed = false;
        cout << "Failed activity override test case" << endl;
    }
    if (giraffe.getType() == "Animal") {
        passed = false;
        cout << "Failed getType override case" << endl;
    }
    if (giraffe.getAttribute() == " is really cool!") {
        passed = false;
        cout << "Failed getAttribute override test case" << endl;
    }
    Giraffe giraffe2("Johnny", 2, "Eating");
    if (giraffe2.activity() != " is very sleepy.") {
        passed = false;
        cout << "Failed low age test case" << endl;
    }
    return passed;
}

/**
 * Testing method to see if Otter class works as intended.
 * @return true if all tests pass, false otherwise.
 */
bool testOtter() {
    bool passed = true;
    Otter otter("Owen", 9, "Sunbathing");
    if (otter.getName() != "Owen") {
        passed = false;
        cout << "Failed alt getName test case" << endl;
    }
    if (otter.getAge() != 9) {
        passed = false;
        cout << "Failed alt getAge test case" << endl;
    }
    if (otter.getLikes() != "Sunbathing") {
        passed = false;
        cout << "Failed alt getLikes test case" << endl;
    }
    if (otter.getTailLength() > 18 || otter.getTailLength() < 12) {
        passed = false;
        cout << "Failed getTailLength test case" << endl;
    }
    if (otter.activity() == " is just hanging out.") {
        passed = false;
        cout << "Failed activity override test case" << endl;
    }
    if (otter.getType() == "Animal") {
        passed = false;
        cout << "Failed getType override case" << endl;
    }
    if (otter.getAttribute() == " is really cool!") {
        passed = false;
        cout << "Failed getAttribute override test case" << endl;
    }
    Otter otter2("Oliver", 1, "Swimming");
    if (otter2.activity() != " is sleeping in their den.") {
        passed = false;
        cout << "Failed low age test case" << endl;
    }
    return passed;
}

/**
 * Testing method to see if Monkey class works as intended.
 * @return true if all tests pass, false otherwise.
 */
bool testMonkey() {
    bool passed = true;
    Monkey monkey("Mort", 12, "Banana");
    if (monkey.getName() != "Mort") {
        passed = false;
        cout << "Failed alt getName test case" << endl;
    }
    if (monkey.getAge() != 12) {
        passed = false;
        cout << "Failed alt getAge test case" << endl;
    }
    if (monkey.getLikes() != "Banana") {
        passed = false;
        cout << "Failed alt getLikes test case" << endl;
    }
    if (monkey.getWeight() > 40 || monkey.getWeight() < 15) {
        passed = false;
        cout << "Failed getWeight test case" << endl;
    }
    if (monkey.activity() == " is just hanging out.") {
        passed = false;
        cout << "Failed activity override test case" << endl;
    }
    if (monkey.getType() == "Animal") {
        passed = false;
        cout << "Failed getType override case" << endl;
    }
    if (monkey.getAttribute() == " is really cool!") {
        passed = false;
        cout << "Failed getAttribute override test case" << endl;
    }
    Monkey monkey2("Mary", 1, "Climbing");
    if (monkey2.activity() != " is with their mom.") {
        passed = false;
        cout << "Failed low age test case" << endl;
    }
    return passed;
}

/**
 * Testing method to see if Lion class works as intended.
 * @return true if all tests pass, false otherwise.
 */
bool testLion() {
    bool passed = true;
    Lion lion("Leo", 6, "Hunting");
    if (lion.getName() != "Leo") {
        passed = false;
        cout << "Failed alt getName test case" << endl;
    }
    if (lion.getAge() != 6) {
        passed = false;
        cout << "Failed alt getAge test case" << endl;
    }
    if (lion.getLikes() != "Hunting") {
        passed = false;
        cout << "Failed alt getLikes test case" << endl;
    }
    if (lion.getBodyLength() > 7 || lion.getBodyLength() < 5) {
        passed = false;
        cout << "Failed getBodyLength test case" << endl;
    }
    if (lion.activity() == " is just hanging out.") {
        passed = false;
        cout << "Failed activity override test case" << endl;
    }
    if (lion.getType() == "Animal") {
        passed = false;
        cout << "Failed getType override case" << endl;
    }
    if (lion.getAttribute() == " is really cool!") {
        passed = false;
        cout << "Failed getAttribute override test case" << endl;
    }
    Lion lion2("Lily", 2, "Daydreaming");
    if (lion2.activity() != " is sticking with the pack.") {
        passed = false;
        cout << "Failed low age test case" << endl;
    }
    return passed;
}

/**
 * Testing method to see if Penguin class works as intended.
 * @return true if all tests pass, false otherwise.
 */
bool testPenguin() {
    bool passed = true;
    Penguin penguin("Perry", 3, "Ice");
    if (penguin.getName() != "Perry") {
        passed = false;
        cout << "Failed alt getName test case" << endl;
    }
    if (penguin.getAge() != 3) {
        passed = false;
        cout << "Failed alt getAge test case" << endl;
    }
    if (penguin.getLikes() != "Ice") {
        passed = false;
        cout << "Failed alt getLikes test case" << endl;
    }
    if (penguin.getHeight() > 5 || penguin.getHeight() < 1) {
        passed = false;
        cout << "Failed getHeight test case" << endl;
    }
    if (penguin.activity() == " is just hanging out.") {
        passed = false;
        cout << "Failed activity override test case" << endl;
    }
    if (penguin.getType() == "Animal") {
        passed = false;
        cout << "Failed getType override case" << endl;
    }
    if (penguin.getAttribute() == " is really cool!") {
        passed = false;
        cout << "Failed getAttribute override test case" << endl;
    }
    Penguin penguin2("Patrick", 1, "Snow");
    if (penguin2.activity() != " is huddling with their family.") {
        passed = false;
        cout << "Failed low age test case" << endl;
    }
    return passed;
}
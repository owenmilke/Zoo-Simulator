<h2>Zoo Simulator - Owen Milke</h2>

<h3>Program Summary:</h3>
<h4>Program Description:</h4>
My program is a customizable zoo game where the user can create unique animals and add them to their zoo.
There are a total of 10 available zoo exhibits/animals that the user can create for their zoo, but they do not all need to be filled.
The user can choose between Giraffes, Otters, Monkeys, Lions, and Penguins to add to your custom zoo and get to determine each of
their names, ages, and something they like.
Each different type of animal also has a unique attribute that is randomized each time an animal is created, as well as, different
unique activities that each animal can do that is random depending on their animal subclass and age.
Once the user either runs out of available exhibit/animal spots, or they decide to stop adding animals, the user gets to see
a print out of all the animals they added to the zoo. This print out is then turned into a .txt file with whatever name the user chose
at the beginning of the program.

<h3>Concepts Used:</h3>

* Inheritance class relationships between the main Animal class and its 5 subclasses (Giraffe, Otter, Monkey, Lion, Penguin)
* Component class relationship between the Zoo class with has numerous Animal classes
* File output of the user's custom zoo to a .txt file
* Input validation for getting words, characters, and integers from the user

<h3>Known Bugs:</h3>
The only possible bug I've noticed is that one rare occasions the getIntInput function behaves unusually, but this does not happen
often, so it should not become a problem for the average user.

<h3>Future Work:</h3>

* Making a sort of "Zoo Manager" type game with the user's custom zoo after they make it.
* Adding more Animal subclasses for the zoo, which should be easy because of the inheritance.
* Being able to edit a zoo after it has been created, possibly through file input.
* More fields for animals.

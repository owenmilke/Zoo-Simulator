# M2OEP-omilke
<h3>Owen Milke CS2300B Module 2 Open-Ended Project</h2>

<h3>Program Summary:</h2>
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

<h3>Module 2 Concepts Used:</h3>
* Inheritance class relationships between the main Animal class and its 5 subclasses (Giraffe, Otter, Monkey, Lion, Penguin)
* Component class relationship between the Zoo class with has numerous Animal classes.
* File output of the user's custom zoo to a .txt file.
* Input validation for getting words, characters, and integers from the user (modified from M1OEP and Monsters)

<h3>Known Bugs:</h3>
The only possible bug I've noticed is that one rare occasions the getIntInput function behaves unusually, but this does not happen
often, so it should not become a problem for the average user.

<h3>Future Work:</h3>
* Making a sort of "Zoo Manager" type game with the user's custom zoo after they make it.
* Adding more Animal subclasses for the zoo, which should be easy because of the inheritance.
* Being able to edit a zoo after it has been created, possibly through file input.
* More fields for animals.

<h3>Expected Grade:</h3>
I am happy with the current state of my program, however, I could understand losing a couple of points.
I wasn't exactly sure what the expected complexity of this program was supposed to be, so I modeled this program off of my best guess. I believe it is complex enough for an Open Ended Program but if not that could lose me some points.
My testing program is very extensive with different functions for each class of my program.
I have 1 HAS-A relationship (Zoo HAS-A Animal) and 5 IS-A relationships (Giraffe, Otter, Monkey, Lion, Penguin IS-A Animal). I'm not exactly sure how any points I get for each of these, but I believe I have the required amount for this project.
I have file output present that serves a purpose as it allows the user to see their zoo after the program has ended.
My documentation is very robust and all elements of my code is explained.
My video goes over the content of my program and showcases multiple demo runs.
I created the repository around 3 days ago because I didn't realize we had 1 fewer week for this module than the last one.

Overall, after looking at the rubric, I could see getting between 70-80 points depending on how much of a detriment my repository creation date is, and if my program is deemed complex enough.
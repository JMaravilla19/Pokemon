#include "Professor.h"
//#include "Player.h"
#include <iostream>
#include "Utility.h"

using namespace std;

ProfessorOak :: ProfessorOak(string p_name){
	name = p_name;
}

void ProfessorOak :: greetPlayer(Player& player) {
	//Professor Oak Introduction
	cout << "Professor Oak: Hello! Welcome to the World of Pokemon!" << endl;
	Utility::waitForEnter();
	cout << "Professor Oak: My name is Professor Oak, people call me the Pokemon professor." << endl;
	Utility::waitForEnter();
	cout << "Professor Oak: First tell me, what's your name?" << endl;
	//Player's name as input
	cout << "-- Enter your name: ";
	getline(cin, player.name);

}

//Method to show options
void ProfessorOak :: offerPokemonChoices(Player& player) {

	//Method Variables
	int choice;

	//Presenting the Pokemon Choices	
	Utility::clearConsole();
	cout << "Professor Oak: Ah, " << player.name << ". What a nice name!" << endl;
	Utility::waitForEnter();

	cout << "Professor Oak: You must be excited to start your adventure, but first...you need a pokemon." << endl;
	Utility::waitForEnter();
	cout << "Professor Oak: I have three Pokemon here with me:" << endl;
	cout << "1.- Charmander - The fire type. A real hothead!" << endl;
	cout << "2.- Bulbasaur - The grass type. Calm and collected!" << endl;
	cout << "3.- Squirtle - The water type. Cool as a cucumber!" << endl;

	cout << "Enter the Number to choose: ";
	cin >> choice;

	player.choosePokemon(choice);


}

void ProfessorOak :: explainMainQuest(Player& player) {
	Utility::clearConsole();
	cout << endl;
	cout << "Professor Oak: Oak-kay " << player.name << ",  I am about to explain you about your upcoming grand adventure." << endl;
	Utility::waitForEnter();

	cout << endl;
	cout << "Professor Oak: You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
	Utility::waitForEnter();

	cout << endl;
	cout << "Professor Oak: Your mission is to collect all the Pokemon Badges." << endl;
	Utility::waitForEnter();

	cout << endl;
	cout << player.name << ": Wait... that sounds a lot like every other Pokemon game out there." << endl;
	Utility::waitForEnter();

	cout << endl;
	cout << "Professor Oak:  Shhh! Don't break the fourth wall " << player.name << "! This is serious business." << endl;
	Utility::waitForEnter();

	cout << endl;
	cout << "Professor Oak: To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter." << endl;
	Utility::waitForEnter();

	cout << endl;
	cout << "Professor Oak: Along the way, you'll capture new Pokemon to strengthen your team. Just remember there's a limit to how many Pokemon you can carry, so choose wisely!" << endl;
	Utility::waitForEnter();

	cout << endl;
	cout << player.name << ": Sounds like a walk in the park... right?" << endl;
	Utility::waitForEnter();

	cout << endl;
	cout << "Professor Oak: Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be starting from square one." << endl;
	cout << endl;
	Utility::waitForEnter();

	cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?" << endl;
	cout << endl;
	Utility::waitForEnter();

	cout << player.name << ": Ready as I'll ever be, Professor!" << endl;
	cout << endl;
	Utility::waitForEnter();

	cout << "Professor Oak: That's the spirit! Now, your journey begins..." << endl;
	Utility::waitForEnter();
}
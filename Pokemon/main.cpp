#include <iostream>
#include <string>

using namespace std;


//Enum for First Pokemon Choice
enum class PokemonChoice{
	Charmander,
	Bulbasaur,
	Squirtle,
	InvalidChoice
};

//Enum Type of Pokemon
enum class PokemonType {
	Fire,
	Electric,
	Water,
	Earth,
	Normal
};

int main() {


	//Variables to store name and pokemon choice
	PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;
	string player_name;
	int choice;


	//Professor Oak Introduction
	cout << "Professor Oak: Hello! Welcome to the World of Pokemon!" << endl;
	cout << "Professor Oak: My name is Professor Oak, people call me the Pokemon professor." << endl;	
	cout << "Professor Oak: First tell me, what's your name?" << endl;
	
	//Player's name as input
	cout << "-- Enter your name: ";
	cin >> player_name;
	cout << endl;



	//Presenting the Pokemon Choices	
	cout << "Professor Oak: Ah, " << player_name << ". What a nice name!" << endl;

	cout << "Professor Oak: You must be excited to start your adventure, but first...your need a pokemon." << endl;
	cout << "Professor Oak: I have three Pokemon here with me:" << endl;

	cout << "1.- Charmander - The fire type. A real hothead!" << endl;	
	cout << "2.- Bulbasaur - The grass type. Calm and collected!" << endl;
	cout << "3.- Squirtle - The water type. Cool as a cucumber!" << endl;

	cout << "Enter the Number to choose: ";
	cin >> choice;

	switch (choice) {
	case 1:
		chosen_pokemon = PokemonChoice::Charmander;
		break;

	case 2: 
		chosen_pokemon = PokemonChoice::Bulbasaur;
		break;

	case 3:
		chosen_pokemon = PokemonChoice::Squirtle;
		break;

	default:
		chosen_pokemon = PokemonChoice::InvalidChoice;
		break;
	}

	switch (chosen_pokemon){
	case PokemonChoice::Charmander:
		cout << "Professor Oak: You chose Charmander! A Fiery Choice, " << player_name << "." << endl;
		break;

	case PokemonChoice::Bulbasaur:
		cout << "Professor Oak: You chose Bulbasaur! A wise Choice, " << player_name << "." << endl;
		break;

	case PokemonChoice::Squirtle:
		cout << "Professor Oak: You chose Squirtle! A Cool Choice, " << player_name << "." << endl;
		break;

	default:
		chosen_pokemon = PokemonChoice::Charmander; //Default option if invalid input.
		cout << "rofessor Oak: Hmm, that doesn't seem right. Let me choose for you " << player_name << "..." << endl;
		cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!"<< endl;
		break;
	}

	//Concluding the FIRST chapter
	cout << "Professor Oak: "
		<< (chosen_pokemon == PokemonChoice::Charmander ? "Charmander" :
			chosen_pokemon == PokemonChoice::Bulbasaur ? "Bulbasaur" : "Squirtle") << " and you, " << player_name << " Will be best friends" << endl;
	
	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!" << endl;

    return 0;
}

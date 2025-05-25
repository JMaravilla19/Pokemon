#include <iostream>
#include <string>

using namespace std;



//Enum for First Pokemon Choice
enum class PokemonChoice {
	CHARMANDER = 1,
	BULBASAUR,
	SQUIRTLE,
	PIKACHU //Default choice
};

//Enum Type of Pokemon
enum class PokemonType {
	FIRE = 1,
	GRASS,
	WATER,
	ELECTRIC
};

//Class Pokemon
class Pokemon {
public:
	string name;
	PokemonType type;
	int health;

	//two constructors
	Pokemon() {

	}

	Pokemon(string p_name, PokemonType p_type, int p_health) {
		name = p_name;
		type = p_type;
		health = p_health;
	}

	void attack() {
		//random message to check it works.
		cout << "Attacks with powerful move!" << endl;

	}
};


class Player {
public:
	//atributes
	string name;
	Pokemon chosenPokemon;


	//Method to choose pokemon
	void choosePokemon(int choice) {
		switch (static_cast<PokemonChoice>(choice)) {
		case PokemonChoice::CHARMANDER:
			chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
			break;
		case PokemonChoice::BULBASAUR:
			chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
			break;

		case PokemonChoice::SQUIRTLE:
			chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
			break;

		default:
			chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
			break;
		}

		cout << "Player " << name << " chose " << chosenPokemon.name << endl;
	}
};

class ProfessorOak {
	//Attributes:
public:
	string name;

	//Method to greet the player
	void greetPlayer(Player& player) {
		//Professor Oak Introduction
		cout << "Professor Oak: Hello! Welcome to the World of Pokemon!" << endl;
		cout << "Professor Oak: My name is Professor Oak, people call me the Pokemon professor." << endl;
		cout << "Professor Oak: First tell me, what's your name?" << endl;

		//Player's name as input
		cout << "-- Enter your name: ";
		getline(cin, player.name);

	}

	//Method to show options
	void offerPokemonChoices(Player& player) {

		//Method Variables
		int choice;

		//Presenting the Pokemon Choices	
		cout << "Professor Oak: Ah, " << player.name << ". What a nice name!" << endl;

		cout << "Professor Oak: You must be excited to start your adventure, but first...your need a pokemon." << endl;
		cout << "Professor Oak: I have three Pokemon here with me:" << endl;

		cout << "1.- Charmander - The fire type. A real hothead!" << endl;
		cout << "2.- Bulbasaur - The grass type. Calm and collected!" << endl;
		cout << "3.- Squirtle - The water type. Cool as a cucumber!" << endl;

		cout << "Enter the Number to choose: ";
		cin >> choice;

		player.choosePokemon(choice);


	}
};

int main() {


	//Creating Objects of Professor, initial pokemon and player
	ProfessorOak professor;
	Pokemon placeholderPokemon;
	Player player;

	//Assigning values to initial pokemon
	placeholderPokemon.name = "Pikachu";
	placeholderPokemon.health = 40;
	placeholderPokemon.type = PokemonType::ELECTRIC;


	//Values to player
	player.name = "Trainer";

	//professor
	professor.name = "Professor Oak";

	//Greet the player and offer choices:
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	//conclude first chaper
	cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!" << endl;
	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!" << endl;

	return 0;
}

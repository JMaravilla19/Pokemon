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
		name = "Pikachu";
		type = PokemonType::ELECTRIC;
		health = 50;
	}

	Pokemon(string p_name, PokemonType p_type, int p_health) {
		name = p_name;
		type = p_type;
		health = p_health;
	}

	//Deep copy constructor
	Pokemon(const Pokemon& other) {
		name = other.name;
		type = other.type;
		health = other.health;

		cout << "A new Pokemon has been copied from " << other.name << endl;
	}

	void attack() {
		//random message to check it works.
		cout << "Attacks with powerful move!" << endl;

	}

	~Pokemon() {
		cout << name << " is getting released in the wild...bye.." << endl;
	}
};


class Player {
public:
	//atributes
	string name;
	Pokemon chosenPokemon;

	//Default constructor
	Player() {
		name = "Trainer";
		chosenPokemon = Pokemon();

		cout << "A new player named '" << name << "' has been created." << endl;
	}

	//Parametized constructor
	Player(string p_name, Pokemon p_chosenPokemon ) {
		name = p_name;
		chosenPokemon = p_chosenPokemon;	
	}


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


	//constructor
	ProfessorOak(string p_name) {
		name = p_name;
	}

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


	ProfessorOak professor = ProfessorOak("Professor Oak");
	

	// Task 1, create with default constructor.
	Pokemon defaultPokemon;

	// Task 1.2 create charmander
	
		Pokemon charmander = Pokemon("Charmilion", PokemonType::FIRE, 100);

		// Task 1.3 print values:
		cout << "Name: " << charmander.name << endl;
		cout << "Health: " << charmander.health << endl;

		cout << "Name: " << defaultPokemon.name << endl;
		cout << "Health: " << defaultPokemon.health << endl;
	


	//Task 2 test the copy constructor
	Pokemon bulbasaur("Bulbasaur", PokemonType::GRASS, 100); // Create Pokemon
	Pokemon bulbasaurCopy = bulbasaur;

	cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
	cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

	// Task 2.1 modify the copy
	bulbasaurCopy.health = 80;
	cout << "After Modification:\n";
	cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
	cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

	// Task 3: Test the destructor
	{
		Pokemon squirtle("Squirtle", PokemonType::WATER, 100); // Pokemon will be destroyed at the end of this scope
	} // Destructor will be called here


	//Greet the player and offer choices:
	Player player("Alicis", charmander);
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	//conclude first chaper
	cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!" << endl;
	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!" << endl;

	return 0;
}

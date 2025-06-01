#include "PokemonType.h"
#include "PokemonChoice.h"
#include <iostream>
#include <string>


using namespace std;

//clear Console function
void clearConsole() {
	// Platform-specific clear console command
#ifdef _WIN32
	system("cls");
#else
	(void)system("clear");
#endif
}

//Function to wait for 'Enter' from user
void waitForEnter() {
	cin.get();
}

//Class Pokemon
class Pokemon {
public:
	string name;
	PokemonType type;
	int health;

	//two constructors
	Pokemon() {
		name = "Pikachu" ;
		type = PokemonType::ELECTRIC;
		health = 100;
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

		//cout << "A new Pokemon has been copied from " << other.name << endl;
	}

	void attack() {
		//random message to check it works.
		cout << "Attacks with powerful move!" << endl;

	}

	~Pokemon() {
		//cout << name << " is getting released in the wild...bye.." << endl;
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

		//cout << "A new player named '" << name << "' has been created." << endl;
	}

	//Parametized constructor
	Player(string p_name, Pokemon p_chosenPokemon ) {
		name = p_name;
		chosenPokemon = p_chosenPokemon;	
	}

	Player(const Player& other) {
		name = other.name;
		chosenPokemon = other.chosenPokemon;
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

		waitForEnter();
		cout << "========================================" << endl;
		cout << name << " chose " << chosenPokemon.name << endl;
		cout << chosenPokemon.name << " is now yours!" << endl;
		cout << "========================================" << endl;
		waitForEnter();
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
		waitForEnter();
		cout << "Professor Oak: My name is Professor Oak, people call me the Pokemon professor." << endl;
		waitForEnter();
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
		clearConsole();
		cout << "Professor Oak: Ah, " << player.name << ". What a nice name!" << endl;
		waitForEnter();

		cout << "Professor Oak: You must be excited to start your adventure, but first...you need a pokemon." << endl;
		waitForEnter();
		cout << "Professor Oak: I have three Pokemon here with me:" << endl;
		cout << "1.- Charmander - The fire type. A real hothead!" << endl;
		cout << "2.- Bulbasaur - The grass type. Calm and collected!" << endl;
		cout << "3.- Squirtle - The water type. Cool as a cucumber!" << endl;

		cout << "Enter the Number to choose: ";
		cin >> choice;

		player.choosePokemon(choice);


	}

	void explainMainQuest(Player& player) {
		clearConsole();
		cout << endl;
		cout << "Professor Oak: Oak-kay " << player.name << ",  I am about to explain you about your upcoming grand adventure." << endl;
		waitForEnter();

		cout << endl;
		cout << "Professor Oak: You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
		waitForEnter();

		cout << endl;
		cout << "Professor Oak: Your mission is to collect all the Pokemon Badges." << endl;
		waitForEnter();

		cout << endl;
		cout << player.name << ": Wait... that sounds a lot like every other Pokemon game out there." << endl;
		waitForEnter();

		cout << endl;
		cout << "Professor Oak:  Shhh! Don't break the fourth wall " << player.name << "! This is serious business." << endl;
		waitForEnter();

		cout << endl;
		cout << "Professor Oak: To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter." << endl;
		waitForEnter();
		
		cout << endl;
		cout << "Professor Oak: Along the way, you'll capture new Pokemon to strengthen your team. Just remember there's a limit to how many Pokemon you can carry, so choose wisely!" << endl;
		waitForEnter();

		cout << endl;
		cout << player.name << ": Sounds like a walk in the park... right?" << endl;
		waitForEnter();

		cout << endl;
		cout << "Professor Oak: Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be starting from square one." << endl;
		cout << endl;
		waitForEnter();

		cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?" << endl;
		cout << endl;
		waitForEnter();

		cout << player.name << ": Ready as I'll ever be, Professor!" << endl;
		cout << endl;
		waitForEnter();

		cout << "Professor Oak: That's the spirit! Now, your journey begins..." << endl;
		waitForEnter();
	}

};// Class Professor

//GameLoop Function
void gameLoop(Player& player) {

	bool keepPlaying{ true };
	int choice{ 0 };



	while (keepPlaying) {
		clearConsole();
		cout << "============================" << endl;
		cout << "What to do now - " << player.name << endl;
		cout << "============================" << endl;
		cout << "1.- Battle Wild Pokemon" << endl;
		cout << "2.- Visit PokeCenter" << endl;
		cout << "3.- Challenge Gyms." << endl;
		cout << "4.- Enter Pokemon League." << endl;
		cout << "5.- Quit." << endl;

		cout << endl;
		cout << "Enter Number's option: ";
		cin >> choice;

		switch (choice){
			case 1:
				clearConsole();
				cout << "You explore searching pokemons but ALL are gone!! (Actually game is not finished cof...cof...)" << endl;
				waitForEnter();
				break;

			case 2:
				clearConsole();
				cout << "You go to the PokeCenter but is closed...nurse Joy is on a Date with Professor Oak! O_O!" << endl;
				waitForEnter();
				break;

			case 3:
				clearConsole();
				cout << "You went to the wrong GYM and now you have to lift heavy weights...LIGHT WEIGHT BABY!!" << endl;
				waitForEnter();
				break;

			case 4:
				clearConsole();
				cout << "You go to the Pokemon league and the guards stop you and laugh... looks like you need more than a " << player.chosenPokemon.name << endl;
				waitForEnter();
				break;

			case 5:
				clearConsole();
				char quit;
				cout << "Are you SURE you want to leave, " << player.name << "? (Y/N): ";
				cin >> quit;

				if (quit == 'Y' || quit == 'y') {
					keepPlaying = false ;
				}

				break;

		default:
			clearConsole();
			cout << "Not a valid option, champie." << endl;
			waitForEnter();
			break;
		}//switch

		waitForEnter();
	}//while

	cout << "Goodbye, " << player.name << "! Thanks for playing!" << endl;
}

int main() {


	ProfessorOak professor = ProfessorOak("Professor Oak");
	Pokemon p1("Charmander", PokemonType::FIRE, 100);
	Player player("Ash", p1);

	//Greet the player and offer choices:
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	//Explain main quest
	professor.explainMainQuest(player);

	gameLoop(player);

	return 0;
}
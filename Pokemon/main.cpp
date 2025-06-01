
#include "Player.h"
#include <iostream>
#include <string>
#include <limits>
#include "Utility.h"

using namespace std;


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
		Utility::waitForEnter();
		cout << "Professor Oak: My name is Professor Oak, people call me the Pokemon professor." << endl;
		Utility::waitForEnter();
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

	void explainMainQuest(Player& player) {
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

};// Class Professor

//GameLoop Function
void gameLoop(Player& player) {

	bool keepPlaying{ true };
	int choice{ 0 };



	while (keepPlaying) {
		Utility::clearConsole();
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

		Utility::clearInputBuffer(); // Clear the input buffer

		switch (choice){
			case 1:
				Utility::clearConsole();
				cout << "You explore searching pokemons but ALL are gone!! (Actually game is not finished cof...cof...)" << endl;
				Utility::waitForEnter();
				break;

			case 2:
				Utility::clearConsole();
				cout << "You go to the PokeCenter but is closed...nurse Joy is on a Date with Professor Oak! O_O!" << endl;
				Utility::waitForEnter();
				break;

			case 3:
				Utility::clearConsole();
				cout << "You went to the wrong GYM and now you have to lift heavy weights...LIGHT WEIGHT BABY!!" << endl;
				Utility::waitForEnter();
				break;

			case 4:
				Utility::clearConsole();
				cout << "You go to the Pokemon league and the guards stop you and laugh... looks like you need more than a " << player.chosenPokemon.name << endl;
				Utility::waitForEnter();
				break;

			case 5:
				Utility::clearConsole();
				char quit;
				cout << "Are you SURE you want to leave, " << player.name << "? (Y/N): ";
				cin >> quit;

				if (quit == 'Y' || quit == 'y') {
					keepPlaying = false ;
				}

				break;

		default:
			Utility::clearConsole();
			cout << "Not a valid option, champie." << endl;
			Utility::waitForEnter();
			break;
		}//switch

		Utility::waitForEnter();
	}//while

	cout << "Goodbye, " << player.name << "! Thanks for playing!" << endl;
}

int main() {

	Pokemon p1("Charmander", PokemonType::FIRE, 100);

	ProfessorOak professor = ProfessorOak("Professor Oak");
	Player player("Ash", p1);

	//Greet the player and offer choices:
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	//Explain main quest
	professor.explainMainQuest(player);

	gameLoop(player);

	return 0;
}
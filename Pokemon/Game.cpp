#include "Game.h"
#include "Player.h"
#include "Utility.h"


#include <iostream>
using namespace std;

Game::Game() {

}

void Game :: gameLoop(Player& player) {

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

		switch (choice) {
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
				keepPlaying = false;
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
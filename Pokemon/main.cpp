#include <iostream>
#include <string>

using namespace std;

int main() {

	string player_name, choosen_pokemon;
	int choice;


	cout << "Professor Oak: Hello! Welcome to the World of Pokemon!" << endl;
	cout << "Professor Oak: My name is Professor Oak, people call me the Pokemon professor." << endl;	
	cout << "Professor Oak: First tell me, what's your name?" << endl;
	
	cout << "-- Enter your name: ";
	cin >> player_name;

	cout << endl;


	cout << "Professor Oak: Ah, " << player_name << ". What a nice name!" << endl;

	cout << "Professor Oak: You must be excited to start your adventure, but first...your need a pokemon." << endl;
	cout << "Professor Oak: I have three Pokemon here with me" << endl;

	cout << "1.- Bulbasaur." << endl;	
	cout << "2.- Charmander." << endl;
	cout << "3.- Squirtle." << endl;

	cout << "Enter the Number to choose: ";
	cin >> choice;


	// Not that good for multiple options, better use switch.
	/*if (choice == 1) {
		cout << "Oak: You chose Bulbasaur! A wise Choice, " << player_name << "." << endl;
	}
	else if (choice == 2) {
		cout << "Oak: You chose Charmander! A Firy Choice, " << player_name << "." << endl;
	}
	else if (choice == 3) {
		cout << "Oak: You chose Squirtle! A Cool Choice, " << player_name << "." << endl;
	}
	else {
		cout << "Invalid choice. Please restart the game." << endl;
		return 0;
	}*/

	switch (choice){
	case 1:
		choosen_pokemon = "Bulbasaur";
		cout << "Oak: You chose Bulbasaur! A wise Choice, " << player_name << "." << endl;
		break;
	case 2:
		choosen_pokemon = "Charmander";
		cout << "Oak: You chose Charmander! A Firy Choice, " << player_name << "." << endl;
		break;
	case 3:
		choosen_pokemon = "Squirtle";
		cout << "Oak: You chose Squirtle! A Cool Choice, " << player_name << "." << endl;
		break;

	default:
		choosen_pokemon = 'Pikachu';
		cout << "Oak: Mmh, that option does not exist," << player_name << "..." << endl;
		cout << "Oak: Let me choose for you, you will get a Pikachu! A surprise guest!"<< endl;

		break;
	}

	cout << "Oak: This is only the beginning. Your journey is about to unfold." << endl;
	cout << "Oak: Good luck and remember...choose wisely." << endl;


    return 0;
}

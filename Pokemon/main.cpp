#include <iostream>
#include <string>

using namespace std;

int main() {

	string player_name;
	int choice;

	cout << "Oak: Hi! I am professor Oak..." << endl;	
	cout << "Oak: What's your name, trainer?" << endl;
	
	cout << "-- Enter your name: ";
	cin >> player_name;

	cout << endl;
	cout << "Oak: Welcome to Pokemon " << player_name << ". You can choose one of the following Pokemon: " << endl;

	cout << "1.- Bulbasaur." << endl;
	cout << "2.- Charmander." << endl;
	cout << "3.- Squirtle." << endl;

	cout << "Enter the Number to choose: ";
	cin >> choice;

	if (choice == 1) {
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
	}

	cout << "Oak: This is only the beginning. Your journey is about to unfold." << endl;
	cout << "Oak: Good luck and remember...choose wisely." << endl;


    return 0;
}

#include "Utility.h"
#include <iostream>
#include <limits>

using namespace std;

//clear Console function
void Utility :: clearConsole() {
	// Platform-specific clear console command
	#ifdef _WIN32
		system("cls");
	#else
		(void)system("clear");
	#endif
}

//Function to wait for 'Enter' from user
void Utility :: waitForEnter() {	
	cin.get();
}

//Function to clear the buffer
void Utility :: clearInputBuffer() {
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
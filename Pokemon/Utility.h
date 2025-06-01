#pragma once
//Utility.h
//Global Functions used in project go here.
/*
"The static keyword makes a function belong to the class itself, not to any object.
You can call it using the class name: Utility::clearConsole(); , without needing to create an instance."
- Outscal.com

*/
class Utility {
public:
	static void clearConsole();
	static void waitForEnter();
	static void clearInputBuffer();
};
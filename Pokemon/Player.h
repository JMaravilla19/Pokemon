#include <string>

using namespace std;

class Player {
public:
	//atributes
	string name;
	Pokemon chosenPokemon;

	//methods:
	Player();
	Player(string p_name, Pokemon p_chosenPokemon);
	Player(const Player& other);
	void choosePokemon(int choice);

};
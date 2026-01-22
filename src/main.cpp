#include <iostream>

const int MAX_HP = 100;
const int PLAYER_ATTACK = 15;
const int ENEMY_ATTACK = 10;
const int HEAL_AMOUNT = 10;

int main() {

    int player_hp = 100;
    int enemy_hp = 100;

    while (player_hp > 0 && enemy_hp > 0) {
	std::cout << "\nPlayer HP: " << player_hp
		  << " | Enemy HP: " << enemy_hp << "\n";

	std::cout << "Choose action:\n";
	std::cout << "1) Attack\n";
	std::cout << "2) Heal\n";
	std::cout << "> ";

	int choice;
	std::cin >> choice;

	//Player Turn
	if (choice == 1) {
	    enemy_hp -= PLAYER_ATTACK;
	    std::cout << "You attack for " << PLAYER_ATTACK << " damage!\n";
	} else if (choice == 2) {
	    player_hp += HEAL_AMOUNT;
	    if (player_hp > MAX_HP) {
		player_hp = MAX_HP;
	    }
	    std::cout << "You heal for " << HEAL_AMOUNT << " HP.\n";
	} else {
	    std::cout << "Invalid choice.\n";
	    continue;
	}

	//Enemy Turn
	player_hp -= ENEMY_ATTACK;
	std::cout << "Enemy attacks for " << ENEMY_ATTACK << " damage.\n";
    }

    std::cout << "\nGame Over!\n";
    return 0;
}



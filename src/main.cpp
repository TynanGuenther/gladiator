#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    std::srand(std::time(nullptr));

    const int MAX_HP = 100;
    const int HEAL_AMOUNT = 10;

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
	    int player_attack = 10 + (std::rand() % 6); // 10-15
	    enemy_hp -= player_attack;
	    std::cout << "You attack for " << player_attack << " damage!\n";
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
	int enemy_attack = 8 + (std::rand() % 5); // 8-12
	player_hp -= enemy_attack;
	std::cout << "Enemy attacks for " << enemy_attack << " damage.\n";
    }

    std::cout << "\nGame Over!\n";
    return 0;
}



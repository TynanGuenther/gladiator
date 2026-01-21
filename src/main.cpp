#include <iostream>

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

	//placeholder logic
	if (choice == 1) {
	    std::cout << "You attack (not implemented yet)\n";
	} else if (choice == 2) {
	    std::cout << "You heal (not implemented yet)\n";
	} else {
	    std::cout << "Invalid choice\n";
	}

	std::cout << "Enemy attacks (not implemented yet)\n";
    }

    std::cout << "\nGame Over!\n";
    return 0;
}

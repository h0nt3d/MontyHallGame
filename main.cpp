#include <iostream>

int main() {
	int doors[3];

	srand(time(NULL));
	int userIn;
	int prizeDoor = rand() % 3;
	int remainingDoor;


	std::cout << "Pick a Door:\n\n1 \t2 \t3 \n\nType: ";
	std::cin >> userIn;

	if ((userIn - 1) == prizeDoor) {
		int doorChoice = rand() % 3;
		while (doorChoice == prizeDoor) {
			doorChoice = rand() % 3;
		}
		std::cout << "\nDoor " << (doorChoice + 1) << " is empty.\n\n";

		
		//int remainingDoor;
		for (int i = 0; i < sizeof(doors); i++) {
			if (i != (userIn - 1) && i != doorChoice) {
				remainingDoor = i;
				break;
			}
		}
	
		std::cout << "Would you like to switch to Door " << (remainingDoor + 1) << " or stay on Door " << userIn << " ?\n";
		int stayChoice;

		std::cout << "1. Stay \n2. Switch \nType in number: ";
		std::cin >> stayChoice;

		if (stayChoice == 1) {
			if ((userIn - 1) == prizeDoor)
				std::cout << "You won the prize!";
			else
				std::cout << "You lost!";
		}
		else {
			userIn = remainingDoor;
			if ((userIn - 1) == prizeDoor)
				std::cout << "You won the prize!";
			else
				std::cout << "You lost!";
		}
	}
	return 0;
}

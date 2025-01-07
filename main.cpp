#include <iostream>
using namespace std;

int doors[3];



int main() {
	srand(time(NULL));
	int userIn;
	int prizeDoor = rand() % 3;
	cout << "Pick a Door:\n\n 1 \t 2 \t 3 \n\n";
	cout << "Type: ";
	cin >> userIn;

	if ((userIn - 1) == prizeDoor) {
		int doorChoice = rand() % 3;
		while (doorChoice == prizeDoor) {
			doorChoice = rand() % 3;
		}
		cout << (doorChoice + 1) << " is empty.\n";

	}
	

	return 0;
}

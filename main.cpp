#include <iostream>
using namespace std;

int doors[3];



int main() {
	srand(time(NULL));
	int randomNum = rand() % 3;
	cout << randomNum;
	return 0;
}

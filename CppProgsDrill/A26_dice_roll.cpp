#include <iostream>
using namespace std;
int main ()
{
	int turn, turn2;

	do {
		cout << "Enter the number for dice roll : ";
		cin >> turn;
	} while (turn!=6);
	cout << "Take one more turn" << endl;
	cin >> turn2;
	if (turn2<=6) {
        cout << "You got a " << turn << " and a " << turn2;
	}
	return 0;
}

#include <iostream>
#include "Zombie.h"
#include "Land.h"
#include "Civilian.h"
using namespace std;

int main() {
	Land land;
	Zombie zombie;
	land.generateType();
	zombie.generateDirection();
	cout << "Land is " << land.type << endl;
	cout << "Direction is " << zombie.direction << endl;
	return 0;
}

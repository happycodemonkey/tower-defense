#include "Zombie.h"

int potentialDirection[] = {0, 1, 2, 3}; // 0 = north, 1 = east, 2 = south, 3 = west

void Zombie::hit(int pts) {
	health = health - pts;	
}

void Zombie::generateDirection() {
	srand(time(NULL));
	direction = rand() % 4;
}

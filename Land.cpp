#include "Land.h"

string landTypes[] = {"free","barrier"};

void Land::generateType() {
	srand(time(NULL));
	int landIndex = rand() % 2;
	type = landTypes[landIndex];
}

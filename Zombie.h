#ifndef __ZOMBIE_H_INCLUDED__
#define __ZOMBIE_H_INCLUDED__

#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Zombie {

	public:
		int speed;
		int damage;
		int health;
		int direction;
		string special;
		
		void hit(int pts);
		void generateDirection();
};

#endif

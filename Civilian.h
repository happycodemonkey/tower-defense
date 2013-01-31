#ifndef __CIVILIAN_H_INCLUDED__
#define __CIVILIAN_H_INCLUDED__

#include <string>
using namespace std;

class Civilian {

        public:
                int speed;
                int damage;
                int health;
                string special;

                void hit(int pts);
};

#endif


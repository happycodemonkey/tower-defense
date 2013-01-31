#ifndef __LAND_H_INCLUDED__
#define __LAND_H_INCLUDED__

#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Land {

	public:
		int x;
		int y;
		string type;

		// the type of the square is randomly generated
		void generateType();

};

#endif

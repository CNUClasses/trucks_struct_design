//============================================================================
// Name        : deleteme77.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

enum color{RED,GREEN,BLUE, YELLOW,ORANGE};

struct stuff{
	color mycolor=ORANGE;
};

const int MAX_STUFF=10;
struct bed{
	stuff mystuff[MAX_STUFF];
};

struct truck{
	int wheels=0;
	bool engine=false;
	bed mybed;
	color mycolor=GREEN;
};
int main() {

	truck mt;

	//1 tech working sequentially
	for(int i=0;i<4;i++)
		mt.wheels+=1;

	//add engine
	if(!mt.engine)
		mt.engine=true;

	//paint over that horrid GREEN
	mt.mycolor=RED;

	//fill up the bed
	while(true){
		stuff mys;
		mt.mybed.mystuff[0]=mys;

		mys.mycolor=YELLOW;
		mt.mybed.mystuff[0]=mys;
	}
}

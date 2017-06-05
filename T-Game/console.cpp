#include <iostream>
#include "Calcules.h"
// Open a console, print Hello World and Bye, wait for a key pressed



int main() {
	int i,angle;
	i = 1;
	Point O = { 0,0 };
	Point P = { 3,3 };
	Point nv_pos;
	Calcules C;
	angle = C.Angle(O,P);
	nv_pos = C.avan_theo(O, angle, 4);
	printf("Nv pos : %d %d \n", nv_pos.x, nv_pos.y);
	printf("L'angle du triangle est : %d \n",angle);
	std::cout << "Hello  World" << std::endl;
	std::cout << "Bye" << std::endl;


	std::cin.get();
	return 0;
}


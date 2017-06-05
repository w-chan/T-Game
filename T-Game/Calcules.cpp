#include <iostream>
#include <string>
#include <math.h> 
#include "Calcules.h"
#define PI 3.14159265


/*Calcul d'un angle par rapport a l'axe y*/
/*Prend 4 variable : les coordonné de l'origine et */
int Calcules::Angle(Point origine, Point p){
	Point Retour;
	float angle;
	printf("%d %d %d %d \n", origine.x, origine.y, p.x, p. y);
	Retour.x = p.x - origine.x ;
	Retour.y = p.y - origine.y ;
	angle = Retour.y / Retour.x;
	angle = atan(angle) * 180.0 / PI;
	return (int)angle;
		
		
}

/*Calcule la position théorique après 1 cycle*/
Point Calcules::avan_theo(Point Orig, int ang, int vitesse){
	Point p;
	float x;
	float y;
	x = cos(ang/ 180.0 * PI)*vitesse ;
	y = sin(ang / 180.0 * PI)*vitesse;
	p.x = (int)x;
	p.y = (int)y;
	return p;
}
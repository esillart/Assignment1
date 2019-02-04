/*
 * File: CrazyRandomSword.cpp
 * Author: Emilio Sillart <esillart314@gmail.com>
 *
 * Created on February 3, 2019, 7:53 PM
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	int randomHit, randomArmor;

	//random seed initialization
	srand(time(NULL));

	randomHit = rand() % 100 + 7;

	randomArmor = rand() % (0.66 * armor) + 2;

	double damage = randomHit - randomArmor;

	if(damage < 0){
		return 0;
	}
	return damage; 
}

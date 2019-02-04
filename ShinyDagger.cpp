/*
 * File: ShinyDagger.cpp
 * Author: Emilio Sillart <esillart314@gmail.com>
 *
 * Created on February 3, 2019, 8:24 PM
 */

#include "ShinyDagger.h"

double ShinyDagger::hit(double armor) {
	double damage;

	if(armor < 50){
		damage = (hitPoints * 3)  - armor;
	}
	else{
		damage = hitPoints - armor;
	}
	if(damage < 0){
		return 0;
	}
	return damage;
}

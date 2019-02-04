/*
 * File: SimpleHammer.cpp
 * Author: Emilio Sillart <esillart314@gmail.com>
 *
 * Created on February 3, 2019, 7:15 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor){
	double damage;

	if(armor < 30){
		damage = hitPoints;
	} 
	else{
		damage = hitPoints - armor;
	}
	if(damage < 0 ){
		return 0;
	}
	return damage;
}

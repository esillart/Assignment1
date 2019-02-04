/*
 * File: SimpleHammer.cpp
 * Author: Emilio Sillart <esillart314@gmail.com>
 *
 * Created on February 3, 2019, 7:15 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor){
	if(armor < 30){
		double damage = hitPoints;
	} 
	else{
		double damage = hitPoints - armor;
	}
	if(damage < 0 ){
		return 0;
	}
	return damage;
}

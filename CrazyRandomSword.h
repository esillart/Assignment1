/*
 * File: CrazyRandomSword.h
 * Author: Emilio Sillart <esillart314@gmail.com>
 *
 * Created on February 3, 2019, 7:24 PM
 */

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/*
 * Defines the behavior of a crazy random sword (hitpoint = random int between 7 and 100,
 * ignores random amount of armor from 2 to a third of total armor) 
 */
class CrazyRandomSword : public Weapon{
	public:
			CrazyRandomSword() : Weapon("Crazy random sword", 40.0) { //Calls Weapon(name, hitpoints) constructor with values Crazy Random Sword and 40.0 (negligible)
			}

			virtual ~CrazyRandomSword() {};

			virtual double hit(double armor);
};

#endif /* CRAZYRANDOMSWORD_H */


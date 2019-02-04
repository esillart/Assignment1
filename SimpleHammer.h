/*
 * File: SimpleHammer.h
 *
 * Author: Emilio Sillart <esillart314gmail.com>
 *
 * Created on February 3, 2019, 6:52 PM
 *
 */

#include <string.h>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/*
 * defines the behavior of a simple hammer weapon (hitpoint = 25, if armor less than 30, ignores all armor points)
 *
 */
class SimpleHammer : public Weapon {
	public: 
		SimpleHammer() : Weapon("Simple hammer", 25.0){ //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0
		}

		virtual ~SimpleHammer() {};

		virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H*/

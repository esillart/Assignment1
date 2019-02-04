/*
 * File: ShinyDagger.h
 * Author: Emilio Sillart <esillart314@gmail.com>
 *
 * Created February 3, 2019, 8:15 PM
 */

#include <string.h>
#include "Weapon.h"

#ifndef SHINYDAGGER_H
#define SHINYDAGGER_H

/*
 * Defines the behavior of a shiny dagger (hitpoint = 20, hitpoints triple if armor < 50)
 */
class ShinyDagger : public Weapon {
		public: 
				ShinyDagger() : Weapon("Shiny dagger", 20.0) { //Calls Weapon(name, hitpoints) constructor with values Shiny Dagger and 20.0
				}

				virtual ~ShinyDagger() {};

				virtual double hit(double armor);

};

#endif /* SHINYDAGGER_H */

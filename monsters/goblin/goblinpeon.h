/*
 * goblinpeon.h
 *
 *Weakest of the goblins ...kinda base classy ... they only go up from here
 *
 *  Created on: Mar. 23, 2019
 *      Author: philneff
 */
#include "goblin.h"

#ifndef MONSTERS_GOBLIN_GOBLINPEON_H_
#define MONSTERS_GOBLIN_GOBLINPEON_H_

class goblin_peon: public goblin {

public:
	goblin_peon();
	~goblin_peon();


	 int getMinDam()=0;
	 void setMinDam(int)=0;

     int getMaxDam()=0;
	 void setMaxDam(int)=0;

	 int getHitPoints()=0;
	 void setHitPoints(int)=0;

	 int getNumAtt()=0;
	 void setNumAtt()=0;

	 level::position getLocation()=0;
	 level::position setLocation(int, int)=0;

	 int getSpeed()=0;
     int setSpeed(int)=0;
private:

     int minDamage_=1;
     int maxDamage_=2;

     int numAtt_=1;

     monsterType type_= GOBLIN;
     level::position location_;
     int hitPoints_;
     int speed_=10;




};

#endif /* MONSTERS_GOBLIN_GOBLINPEON_H_ */

/*
 * goblin.h
 *
 * @TODO
 * will be subclassed - ideas? peon, warrior, shaman, chief, warlord etc...
 *
 *  Created on: Mar. 23, 2019
 *      Author: philneff
 */

#ifndef MONSTERS_GOBLIN_H_
#define MONSTERS_GOBLIN_H_
#include <iostream>
#include <string>
#include "../monsterEnum.h"
#include "../../gameplay/level.h"
#include "../monster.h"

class goblin: public monster {
public:
	goblin();
	~goblin();

	virtual int getMinDam()=0;
	virtual void setMinDam(int)=0;

	virtual int getMaxDam()=0;
	virtual void setMaxDam(int)=0;

	virtual int getHitPoints()=0;
	virtual void setHitPoints(int)=0;

	virtual int getNumAtt()=0;
	virtual void setNumAtt()=0;

	virtual level::position getLocation()=0;
	virtual level::position setLocation(int, int)=0;

	virtual int getSpeed()=0;
	virtual int setSpeed(int)=0;


private:

int minDamage_=1;
int maxDamage_=4;

monsterType type_= GOBLIN;
level::position location_;
int hitPoints_;
int speed_;

};

#endif /* MONSTERS_GOBLIN_H_ */

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
#include "monsterEnum.h"

#include "monster.h"

class goblin: public monster {
public:
	goblin();
	~goblin();


private:

monsterType type_= GOBLIN;
};

#endif /* MONSTERS_GOBLIN_H_ */

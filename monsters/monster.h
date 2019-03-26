/*
 * monster.h
 *
 *  Created on: Mar. 23, 2019
 *      Author: philneff
 */

#ifndef MONSTERS_MONSTER_H_
#define MONSTERS_MONSTER_H_

class monster {
public:
	monster();
	virtual ~monster();

	virtual int getMinDam()=0;
	virtual void setMinDam(int)=0;

	virtual int getHitPoints()=0;
	virtual void setHitPoints(int)=0;

	virtual int getNumAtt()=0;
	virtual void setNumAtt()=0;
};

#endif /* MONSTERS_MONSTER_H_ */

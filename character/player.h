/*
 * player.h
 *
 *  Created on: Apr. 6, 2019
 *      Author: philneff
 */

#ifndef CHARACTER_PLAYER_H_
#define CHARACTER_PLAYER_H_

#include <stdio.h>
#include <string>

namespace player {

class player {
public:
	player();
	virtual ~player();

	virtual int getStrength() = 0;
	virtual void setStrength(int) = 0;

	virtual int getIntelligence() = 0;
	virtual void setIntelligence(int) = 0;

	virtual int getWisdom() = 0;
	virtual void setWisdom(int) = 0;

	virtual int getDexerity() = 0;
	virtual void setDexterity(int) = 0;

	virtual int getConstitution() = 0;
	virtual void setConstitution(int) = 0;

	virtual int getCharisma() = 0;
	virtual void setCharisma(int) = 0;

	virtual int getHitPoints() = 0;
	virtual void setHitPoints(int) = 0;

	virtual std::string getName() = 0;
	virtual void setName(std::string) = 0;

	virtual std::string getClass() = 0;
	virtual void setClass(std::string) = 0;

	virtual std::string getRace() = 0;
	virtual void setRace(std::string) = 0;

private:

	int strength_ = 0;
	int intelligence_ = 0;
	int wisdom_ = 0;
	int dexterity_ = 0;
	int constitution_ = 0;
	int charisma_ = 0;

	std::string name_ = "";
	std::string class_= "";
	std::string race_ ="";

};

} /* namespace player */

#endif /* CHARACTER_PLAYER_H_ */

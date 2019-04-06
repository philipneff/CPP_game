/*
 * fighter.h
 *
 *  Created on: Apr. 6, 2019
 *      Author: philneff
 */

#ifndef CHARACTER_CLASS_FIGHTER_H_
#define CHARACTER_CLASS_FIGHTER_H_

#include "../player.h"

namespace player {

class fighter: player {
public:
	fighter();
	~fighter();

	int getStrength() override;
	void setStrength(int) override;

	int getIntelligence() override;
	void setIntelligence(int) override;

	int getWisdom() override;
	void setWisdom(int) override;

	int getDexerity() override;
	void setDexterity(int) override;

	int getConstitution() override;
	void setConstitution(int) override;

	int getCharisma() override;
	void setCharisma(int) override;

	int getHitPoints() override;
	void setHitPoints(int) override;

	std::string getName() override;
	void setName(std::string) override;

	std::string getClass() override;
	void setClass(std::string) override;

	std::string getRace() override;
	void setRace(std::string) override;


};

} /* namespace player */

#endif /* CHARACTER_CLASS_FIGHTER_H_ */

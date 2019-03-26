/*
 * mace.h
 *
 *  Created on: Mar. 23, 2019
 *      Author: philneff
 */
#include "../melee.h"
#include <iostream>
#include <string>
#include "../weaponEnum.h"

#ifndef WEAPONS_MELEE_MACE_H_
#define WEAPONS_MELEE_MACE_H_

class mace: public melee
	{
	public:
	    mace(int attributeDamageBonus, int attributeToHitBonus, effectBonus effect, int effectBonus);
	    ~mace();
	    int getDamageMin() override;
	    void setDamageMin(int) override;

	    int getDamageMax() override;
	    void setDamageMax(int) override;

	    int getAttributeDamageBonus() override;
	    void setAttributeDamageBonus(int) override;

	    void setAttributeToHitBonus(int) override;
	    int getAttributeToHitBonus() override;

	    void setEffect(effectBonus effect) override;
	    effectBonus getEffect() override;


	    int getEffectBonus() override;
	    void setEffectBonus(int) override;



	private:

	int damageMin_ = 2;
	int damageMax_ = 8;
	  //any pure magic bonus - ie..sword +3 would  return 3
	int attributeDamageBonus_;
	int attributeToHitBonus_;
	  //this will be drawn from an enum (poison, ice, fire etc...)
	effectBonus effect_;
	int effectBonus_;
	damageType damageType_ = BLUNT;

	int range_ = 1;
	int speed_ = 3;
	};

#endif /* WEAPONS_MELEE_MACE_H_ */

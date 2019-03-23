/*
 * sword.h
 *
 *  Created on: Mar. 23, 2019
 *      Author: philneff
 */

#ifndef WEAPONS_MELEE_SWORD_H_
#define WEAPONS_MELEE_SWORD_H_

#include "melee.h"
#include <iostream>
#include <string>

#include "../weaponEnum.h"

class sword : public melee
{
public:
    sword(int attributeDamageBonus, int attributeToHitBonus, std::string effect, int effectBonus);

    int getDamageMin() override;
    void setDamageMin(int) override;

    int getDamageMax() override;
    void setDamageMax(int) override;

    int getAttributeDamageBonus() override;
    void setAttributeDamageBonus(int) override;

    void setAttributeToHitBonus(int) override;
    int getAttributeToHitBonus() override;

    void setEffect(std::string) override;
    int getEffectBonus() override;
    void setEffectBonus(int) override;



private:

int damageMin_=1;
int damageMax_=6;
  //any pure magic bonus - ie..sword +3 would  return 3
int attributeDamageBonus_;
int attributeToHitBonus_;
  //this will be drawn from an enum (poison, ice, fire etc..)
effectBonus effect_;
int effectBonus_;
damageType damageType_= SLASHING;

int range_=1;
int speed_=3;
};

#endif /* WEAPONS_MELEE_SWORD_H_ */

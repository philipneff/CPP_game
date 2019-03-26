/*
 * bow.h
 *
 *  Created on: Mar. 24, 2019
 *      Author: philneff
 */

#ifndef WEAPONS_RANGED_BOW_H_
#define WEAPONS_RANGED_BOW_H_


#include "../ranged.h"
#include <iostream>
#include <string>

#include "../weaponEnum.h"

class bow : public ranged
{
public:
    bow(int attributeDamageBonus, int attributeToHitBonus, effectBonus effect, int effectBonus);
    ~bow();

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

int damageMin_ = 1;
int damageMax_ = 6;
  //any pure magic bonus - ie..sword +3 would  return 3
int attributeDamageBonus_;
int attributeToHitBonus_;
  //this will be drawn from an enum (poison, ice, fire etc..)
//effectBonus effect_;
int effectBonus_;
damageType damageType_ = PIERCING;
effectBonus effect_;
int range_ = 3;
int speed_ = 3;
};



#endif /* WEAPONS_RANGED_BOW_H_ */

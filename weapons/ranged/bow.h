#ifndef BOW_H
#define BOW_H

#include "weapon.h"

#include <iostream>
#include <string>
#include "../ranged.h"
#include "weaponEnum.h"

class bow : public ranged
{
    public:
        bow(int attributeDamageBonus, int attributeToHitBonus, std::string effect, int effectBonus);

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
      //this will be drawn from an enum (poison, ice, fire etc...)
    effectBonus effect_;
    int effectBonus_;
    damageType damageType_= PIERCING;

    int range_=1;
    int speed_=3;
};



#endif

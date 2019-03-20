#ifndef BOW_H
#define BOW_H

#include "Ranged.h"
#include "weapon.h"

#include <iostream>
#include <string>

class Bow : public Ranged
{
    public:
        Bow(int, int, std::string, int);
        int getDamageMin() override;
        void setDamageMin(int) override;

    private:
    int damageMin_;
    int damageMax_;
      //any pure magic bonus - ie..sword +3 would  return 3
    int attributeDamageBonus_;
    int attributeToHitBonus_;
      //this will be drawn from an enum (poison, ice, fire etc...)
    std::string effect_;
    int effectBonus_;  
};



#endif
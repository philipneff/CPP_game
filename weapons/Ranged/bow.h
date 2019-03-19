#ifndef BOW_H
#define BOW_H

#include "Ranged.h"
#include "weapon.h"

#include <iostream>
#include <string>

class Bow : public Ranged
{
    public:

        Bow();
        Bow(int, int, std::string, int);
        ~Bow();

        
        int getDamageMin()  override;
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
    std::string effect_;
    int effectBonus_; 
    int speed;
    int range_; 
};



#endif
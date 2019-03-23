#ifndef MELEE_H
#define MELEE_H

#include "weapon.h"
#
class melee : public weapon
{
    public: 
        melee();
        ~melee();
        virtual int getDamageMin();
        virtual void setDamageMin(int)=0;

        virtual int getDamageMax()=0;
        virtual void setDamageMax(int)=0;

        virtual int getAttributeDamageBonus()=0;
        virtual void setAttributeDamageBonus(int)=0;

        virtual void setAttributeToHitBonus(int)=0;
        virtual int getAttributeToHitBonus()=0;

        virtual void setEffect(std::string)=0;
        virtual int getEffectBonus()=0;
        virtual void setEffectBonus(int)=0;

    private:
    std::string type_="melee";
};




#endif

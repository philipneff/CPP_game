#ifndef WEAPON_H
#define WEAPON_H
//this is going to be an interface
#include <iostream>
#include <string>

#include"weaponEnum.h"

class weapon
{
    public:
		//weapon();
		virtual ~weapon(){};
      
        virtual int getDamageMin()=0;
        virtual void setDamageMin(int)=0;

        virtual int getDamageMax()=0;
        virtual void setDamageMax(int)=0;

        virtual int getAttributeDamageBonus()=0;
        virtual void setAttributeDamageBonus(int)=0;

        virtual void setAttributeToHitBonus(int)=0;
        virtual int getAttributeToHitBonus()=0;

        virtual void setEffect(effectBonus effect)=0;
        virtual effectBonus getEffect()=0;

        virtual int getEffectBonus()=0;
        virtual void setEffectBonus(int)=0;


       


        
    private:
      
};





#endif 

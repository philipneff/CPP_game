#ifndef RANGED_H
#define RANGED_H

#include "weapon.h"
#
class Ranged : public Weapon
{
    public: 
        Ranged();
        virtual int getDamageMin();
        virtual void setDamageMin(int)=0;

        
    private:
    int range_;
    std::string type_="ranged";
};




#endif
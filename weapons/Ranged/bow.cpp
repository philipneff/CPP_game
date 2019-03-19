#include "bow.h"

Bow::Bow(int damageBonus, int hitBonus, std::string effect, int effectBonus)
   :Ranged()
{

}

void Bow::setDamageMin(int i=1)
{
   damageMin_=i;
}
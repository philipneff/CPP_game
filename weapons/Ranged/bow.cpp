#include "bow.h"




Bow::Bow()
   :Ranged()
   {}

Bow::Bow(int damageBonus, int hitBonus, std::string effect, int effectBonus)
   :Ranged()
{

}


int Bow::getDamageMin(){return damageMin_ ;}
void Bow::setDamageMin(int i){damageMin_=i;}

int Bow::getDamageMax(){return damageMax_;}
void Bow::setDamageMax(int i){damageMax_=j;}

int Bow::getAttributeDamageBonus() {return attributeDamageBonus_;}
void Bow::setAttributeDamageBonus(int i){attributeDamageBonus_=i;}

void Bow::setAttributeToHitBonus(int i){attributeToHitBonus_=i}
int Bow::getAttributeToHitBonus(int){ return attributeToHitBonus_;}

void Bow::setEffect(std::string effect){ effect_=effect;}
int  Bow::getEffectBonus() {return effectBonus_;}
void Bow::setEffectBonus(int i){effectBonus_=i;}
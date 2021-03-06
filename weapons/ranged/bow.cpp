#include "../ranged/bow.h"
#include "../weaponEnum.h"

		bow::bow(int attributeDamageBonus, int attributeToHitBonus, effectBonus effect, int effectBonus)
			:attributeDamageBonus_(attributeDamageBonus)
			,attributeToHitBonus_(attributeToHitBonus)
			,effect_(effect)
			,effectBonus_(effectBonus)
		{

		}

		bow::~bow(){}

        int bow::getDamageMin()
        {
        	return damageMin_;
        }
        void bow::setDamageMin(int damMin)
        {
        	damageMin_= damMin;
        }

        int bow::getDamageMax()
        {
        	return damageMax_;
        }
        void bow::setDamageMax(int damMax)
        {
        	damageMax_= damMax;
        }

        int bow::getAttributeDamageBonus()
        {
        	return attributeDamageBonus_;
        }
        void bow::setAttributeDamageBonus(int attDamBon)
        {
        	attributeDamageBonus_= attDamBon;
        }

        int bow::getAttributeToHitBonus()
        {
        	return attributeToHitBonus_;
        }


        void bow::setAttributeToHitBonus(int setAttBon)
        {
        	attributeToHitBonus_=setAttBon;
        }

        void bow::setEffect(effectBonus effect)
        {
        	effect_=effect;
        }

        effectBonus bow::getEffect()
        {
        	return effect_;
        }


        int bow::getEffectBonus()
        {
        	return effectBonus_;
        }
        void bow::setEffectBonus(int effectBonus)
        {
        	effectBonus_=effectBonus;
        }




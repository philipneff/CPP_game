/*
 * sword.cpp
 *
 *  Created on: Mar. 23, 2019
 *      Author: philneff
 */

#include "../melee/sword.h"



		sword::sword(int attributeDamageBonus, int attributeToHitBonus, std::string effect, int effectBonus)
			:attributeDamageBonus_(attributeDamageBonus)
			,attributeToHitBonus_(attributeToHitBonus)
			,effect_(effect)
			,effectBonus_(effectBonus)
		{

		}

        int sword::getDamageMin()
        {
        	return damageMin_;
        }
        void sword::setDamageMin(int damMin)
        {
        	damageMin_= damMin;
        }

        int sword::getDamageMax()
        {
        	return damageMax_;
        }
        void sword::setDamageMax(int damMax)
        {
        	damageMax_= damMax;
        }

        int sword::getAttributeDamageBonus()
        {
        	return attributeDamageBonus_;
        }
        void sword::setAttributeDamageBonus(int attDamBon)
        {
        	attributeDamageBonus_= attDamBon;
        }

        int sword::getAttributeToHitBonus()
        {
        	return attributeToHitBonus_;
        }


        void sword::setAttributeToHitBonus(int setAttBon)
        {
        	attributeToHitBonus_=setAttBon;
        }

        void sword::setEffect(std::string effectType)
        {
        	effect_=effectType;
        }

        int sword::getEffectBonus()
        {
        	return effectBonus_;
        }

        void sword::setEffectBonus(int effectBonus)
        {
        	effectBonus_=effectBonus;
        }

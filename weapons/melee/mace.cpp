/*
 * mace.cpp
 *
 *  Created on: Mar. 23, 2019
 *      Author: philneff
 */

#include "../melee/mace.h"



		mace::mace(int attributeDamageBonus, int attributeToHitBonus, std::string effect, int effectBonus)
			:attributeDamageBonus_(attributeDamageBonus)
			,attributeToHitBonus_(attributeToHitBonus)
			,effect_(effect)
			,effectBonus_(effectBonus)
		{

		}

        int mace::getDamageMin()
        {
        	return damageMin_;
        }
        void mace::setDamageMin(int damMin)
        {
        	damageMin_= damMin;
        }

        int mace::getDamageMax()
        {
        	return damageMax_;
        }
        void mace::setDamageMax(int damMax)
        {
        	damageMax_= damMax;
        }

        int mace::getAttributeDamageBonus()
        {
        	return attributeDamageBonus_;
        }
        void mace::setAttributeDamageBonus(int attDamBon)
        {
        	attributeDamageBonus_= attDamBon;
        }

        int mace::getAttributeToHitBonus()
        {
        	return attributeToHitBonus_;
        }


        void mace::setAttributeToHitBonus(int setAttBon)
        {
        	attributeToHitBonus_=setAttBon;
        }

        void mace::setEffect(std::string effectType)
        {
        	effect_=effectType;
        }

        int mace::getEffectBonus()
        {
        	return effectBonus_;
        }

        void mace::setEffectBonus(int effectBonus)
        {
        	effectBonus_=effectBonus;
        }

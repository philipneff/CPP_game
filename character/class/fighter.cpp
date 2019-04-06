/*
 * fighter.cpp
 *
 *  Created on: Apr. 6, 2019
 *      Author: philneff
 */

#include "fighter.h"

namespace player {

fighter::fighter() {
	// TODO Auto-generated constructor stub

}

fighter::~fighter() {
	// TODO Auto-generated destructor stub
}

int getStrength() {

	return player::strength_;
}
void setStrength(int) {
}

int getIntelligence() {
	return player::intelligence_;
}
void setIntelligence(int roll) {
	player::intelligence_= roll;
}

int getWisdom() {
	return player::wisdom_;
}
void setWisdom(int) {
}

int getDexerity() {
}
void setDexterity(int) {
}

int getConstitution() {
}
void setConstitution(int) {
}

int getCharisma() {
}
void setCharisma(int) {
}

int getHitPoints() {
}
void setHitPoints(int) {
}

std::string getName() {
}
void setName(std::string) {
}

std::string getClass() {
}
void setClass(std::string) {
}

std::string getRace() {
}
void setRace(std::string) {
}



} /* namespace player */

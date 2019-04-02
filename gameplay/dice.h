/*
 * dice.h
 *
 *  Created on: Mar. 31, 2019
 *      Author: philneff
 */
#include <iostream>
#include <string>
#include <random>
#include <iomanip>
#include <cmath>
#include <time.h>


#ifndef GAMEPLAY_DICE_H_
#define GAMEPLAY_DICE_H_

namespace dice{

int d4()
{

	return (rand() % (4 ) + (1));
}

int d6()
{
	return (rand() % (6 ) + (1));
}

int d8()
{
	return (rand() % (8) + (1));
}

int d10()
{
	return (rand() % (10) + (1));

}

int d12()
{
	return (rand() % (12) + (1));

}



int d20()
{
	return (rand() % (20) + (1));

}

int d100()
{
	return (rand() % (100) + (1));

}

}//namespace
#endif /* GAMEPLAY_DICE_H_ */

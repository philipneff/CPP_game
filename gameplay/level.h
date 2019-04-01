/*
 * level.h
 *
 *  Created on: Mar. 31, 2019
 *      Author: philneff
 */

#ifndef GAMEPLAY_LEVEL_H_
#define GAMEPLAY_LEVEL_H_

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

namespace level{


struct position{
	int x;
	int y;

};

class level
{
public:

	/**
	 * function that will take a txt file and convert it to a vector of strings.
	*/
	void loadLevel(std::string);

	/**
	* function that will draw map at the end of each level
	*/
	void drawLevel();

	position findOnLevel(char);


private:
	//level to use
	std::vector<std::string> level_;
	//position positionA;

};




}
#endif /* GAMEPLAY_LEVEL_H_ */

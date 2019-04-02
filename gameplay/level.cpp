# include "level.h"


namespace level{


void level::loadLevel(std::string levelNum)
{

	std::ifstream ifs;


	ifs.open (levelNum);
	if (ifs.fail()){
		perror("levelLoad");

	}
	std::string input;
	while(std::getline(ifs, input))
	{
	level_.push_back(input);
	}
	ifs.close();
}

void level::drawLevel()
{
	for(int i=0;i<level_.size();i++)
	{
		std::cout<< level_[i] <<std::endl;
	}

}

position level::findOnLevel(char ascii){

	int x = 0;
	int y = 0;
	int counter = 0;
	position positionA;
	for(int i=0; i<level::level_.size();++i)//this iterates over each line (y coordinate)
	{
		for(std::string::size_type i=0; i<level::level_[counter].size(); ++i)
			{
				if(ascii==level::level_[counter][i])
				{
					y=counter;
					x=i;
					positionA.x = x;
					positionA.y = counter;
				}
			}
		counter++;
	}

		std::cout<<"the x position is ..."<<positionA.x<<std::endl;
		std::cout<<"the y position is ..."<<positionA.y<<std::endl;
		return positionA;

}

}//namespace level

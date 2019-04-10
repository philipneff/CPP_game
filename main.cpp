#include <iostream>
#include <iomanip>
#include "bow.h"
#include <string>
#include "sword.h"
#include <fstream>
#include "level.h"
#include "./gameplay/dice.h"
// #include "./gamestate/gamestate.h"

int main ()
{
    // Tracks the current level, player position,  
    //
    //gamestate::gamestate gamestate;

    srand(time(0));
	level::level current;
//	current.loadLevel("/home/student/Desktop/CPP_game/levels/level1.txt");
	current.loadLevel("./levels/level1.txt");
	current.drawLevel();
	current.findOnLevel('F');
    std::cout << "this is the game" << std::endl;
    bow b(4,5,HOLY, 6);
    std::cout<<dice::d100()<<std::endl;
    std::cout<<dice::d100()<<std::endl;
    std::cout<<dice::d100()<<std::endl;
    std::cout<<dice::d100()<<std::endl;
    std::cout<<dice::d100()<<std::endl;
    std::cout<<dice::d100()<<std::endl;

    std::cout<<"bows damage min is"<< b.getDamageMin()<<std::endl;
    std::cout<<"bows effect is"<<b.getEffect()<<std::endl;
    sword s(1,2,NONE, 5);
    std::cout<<"sword max damage should be 16 and is ... "<<s.getDamageMax()<<std::endl;
}


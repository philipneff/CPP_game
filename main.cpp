#include <iostream>


#include "bow.h"
#include <string>
#include "sword.h"


int main ()
{
    std::cout << "this is the game" << std::endl;
    bow b(4,5,HOLY, 6);

    std::cout<<"bows damage min is"<< b.getDamageMin()<<std::endl;
    std::cout<<"bows effect is"<<b.getEffect()<<std::endl;
    sword s(1,2,NONE, 5);
    std::cout<<"sword max damage should be 16 and is ... "<<s.getDamageMax()<<std::endl;
}


#include <iostream>
#include <string>
#include "ranged.h"
#include "weapon.h"
#include "bow.h"
#include<string>


int main ()
{
    std::cout << "this is the game" << std::endl;
    bow b(6,6, "poison",5);
    b.getAttributeDamageBonus();
}

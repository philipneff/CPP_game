
#ifndef MONSTER_H
#define MONSTER_H

#include "char_modifiers.h"
#include <iostream>
#include <string>


class Monster
{
    public:

    Monster();
    Monster(std::string);

    //this will be set in each subclass but think it should return an attack class
    virtual int attack()=0;
    int getHealth();
    void  setHealth();


    protected:

    private:
    int health_;
    std::string Name_;
    //these will control what the monster is weak or strong against
    modifier weak;
    modifier strong;


};

#endif // MONSTER_H

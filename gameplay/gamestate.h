/*************************************************************
 * gamestate.h
 *
 * Author: Davin Salo
 * Date: April 9, 2019
 *
 * Manages the current state of the game
 ***********************************************************/

#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "./level.h"

namespace gamestate {


    public:
        level loadlevel();
        bool saveState(saveFile); // on quit, saves current state of the game
        bool loadState(string); // on load, loads state of the game from previous saveState
    private:
        string saveFile; // path to save state within the game
        level level; // the current level loaded
        mobs[] mobs; // Array of all monsters/players in the current level. index 0 always the player? Reserve Index 2 for a second player, add additional mobs as necessary, all update functions should be called on all of these every 'turn'. Whether it be reaction based or time based that's another consideration (probably performance based)
        int state; // tracks the state index
        // 1. Menu
        // 2. Playing
        // 3. Inventory
        // 4. Dialogue
}

#endif /* GAMESTATE_H */

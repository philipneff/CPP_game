#include <string>
#include <iostream>

class levelGenerator{
    public:
        void printString(std::string string);
        std::string generateLevel(int width, int height, int biome = 0);
    private:
        // Takes an argument for a supported biome, returns a character value associated with that biome
        std::string biome(int biome);
};

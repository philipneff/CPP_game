#include "./levelGenerator.h"

int main(){
    int width = 80;
    int height = 40;
    levelGenerator levelGen;
    std::string levelString = levelGen.generateLevel(width,height);
    levelGen.printString(levelString);
}

void levelGenerator::printString(std::string string){

    for(int i = 0; i < string.length(); ++i)
        std::cout << string[i];

}

std::string levelGenerator::generateLevel(int width, int height){
    std::string result;

    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            if( j == 0 || j == width-1 || i == 0 || i == height-1 ){ // is an edge 
                result += "\u2588"; // black, full rectangle
                if(j==width-1) result += "\n";
                continue;
            } else {
                result += " ";
            }

            //    std::cout << "\u25A0"; // black square
            //    std::cout << "\u25AE"; // black rectangle
        }
    }

    return result;
}

#include <string>
#include <iostream>

int main(){

    // Arbitrary resolution based off of HD, makes for better YOUTUBES if we scale it up... recognizing that it isn't perfect since characters aren't as wide as they are tall.
    int width = 1920/30;
    int height = 1080/30;
    int i, j;
    std::string result;

    for(i = 0; i < height; i++){
        for(j = 0; j < width; j++){
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

    // Print out the result
    return result;
}



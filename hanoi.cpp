#include <iostream>

size_t count = 0;

void hanoi(size_t heigth, size_t first, size_t second) {
    if (heigth == 1) {
        std::cout << "Move disk 1 from pin " << first << " to " << second << ". Turn: " << ++count << std::endl;
        //++count;
    }
    else {
        size_t temp = 6 - first - second;
        hanoi(heigth - 1, first, temp);
        std::cout << "Move disk "<< heigth <<" from pin " << first << " to " << second << ". Turn: " << ++count << std::endl;
        //++count;
        hanoi(heigth - 1, temp, second);
    }
}


int main()
{

    size_t height = 32;
    hanoi(height, 1, 2);
    /*
    for (height; height <= 10; height++) {
        hanoi(height, 1, 2);
        std::cout << "For a tower height of " << height << ", you need "<< count << " moves."<< std::endl;
        count = 0;
    }
    */



}

//trying to learn c++
#include <iostream>

int main()
{
    int x;

    std::cout << "Insert number: ";
    std::cin >> x;
    
    if (x % 2 > 0) {
        std::cout << "The number is odd.";
    }
    else if (x % 2 == 0) {
        std::cout << "The number is even.";
    }
}
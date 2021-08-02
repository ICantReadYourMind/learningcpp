//trying to learn c++
#include <iostream>

int main()
{
    unsigned long long int x;

    for( ; ; ) {
    std::cout << "Insert number (insert 0, text or Control+C to exit): ";
    std::cin >> x;

    if (x == 0) {
        std::cout << "You inserted a number or text, the application will now close.";
        return 0;
    }
    else if (x % 2 > 0) {
        std::cout << "The number is odd.\n";
    }
    else if (x % 2 == 0) {
        std::cout << "The number is even.\n";
    }
}
}
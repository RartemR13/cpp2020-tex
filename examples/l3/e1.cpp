#include <iostream>

int main() {
    int x = 4;

    {
        int x = 5;
        std::cout << x;
    }
    std::cout << x;
}
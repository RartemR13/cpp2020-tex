#include <iostream>

int x = 0;

int main() {
    int x = 4;
    std::cout << ::x;
    std::cout << x;
}
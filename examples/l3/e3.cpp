#include <iostream>

namespace N {
    int x = 10;
}

int x = 5;

int main() {
    std::cout << N::x;
    std::cout << x;
}
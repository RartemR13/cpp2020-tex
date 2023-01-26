#include <iostream>

int f() {
    std::cout << 1;
    return 2;
}

int g() {
    std::cout << 2;
    return 3;
}

int main() {
    std::cout << f() + g() * g();
}
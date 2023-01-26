#include <iostream>

int f() {
    std::cout << 1;
    return 0;
}

int g() {
    std::cout << 2;
    return 0;
}

int main() {
    f() + g();
}
#include <iostream>

namespace N {
    int x;
}

using namespace N;

int x = 0;

int main() {
    std::cin >> x;
    std::cout << x + 5;
}
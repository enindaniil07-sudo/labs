#include <iostream>

int main() {
    unsigned int x, i;
    std::cin >> x >> i;

    x = x | (1 << i);

    std::cout << x << std::endl;
    return 0;
}
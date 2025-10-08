#include <iostream>

int main() {
    int a = 12; // 1100
    int b = 10; // 1010

    std::cout << "a=12(1100), b=10(1010)" << std::endl << std::endl;

    std::cout << "AND:  a & b  = " << (a & b) << std::endl;
    std::cout << "OR:   a | b  = " << (a | b) << std::endl;
    std::cout << "XOR:  a ^ b  = " << (a ^ b) << std::endl;
    std::cout << "NOT:  ~a     = " << (~a) << std::endl;
    std::cout << "Shift left:  a << 2 = " << (a << 2) << std::endl;
    std::cout << "Shift right: a >> 2 = " << (a >> 2) << std::endl;

    return 0;
}

#include <iostream>
#include "fibonacci.h"

int main() {
    int num;
    std::cout << "Enter the number: ";
    std::cin >> num;

    // ���������� ��������� ����� ���������
    std::cout << "Fibonacci numbers: ";
    for (int i = 0; i < fib::find(num) + 1; i++) {
        std::cout << fib::get(i) << " ";
    }
    std::cout << std::endl;

    // ��������� �������� �����
    if (fib::check(num)) {
        std::cout << num << " - Fibonacci number " << fib::find(num)+1 << std::endl;
    }
    else {
        std::cout << num << " - Not a Fibonacci number" << std::endl;
    }

    return 0;
}
#include <iostream>

int main() {
    int N;

    std::cin >> N;

    if (std::cin.fail() || N < 1 || N > 30) {
        std::cout << "ERROR" << std::endl;
        return 1;
    }
    int f1 = 0;//первое число
    int f2 = 1;//второе число
    int k = 0;//номер числа Фибоначчи

    while (k <= N) {
        if (f2 % 2 != 0) {
            std::cout << f2 << std::endl;
            k++;
        }

        int c = f1 + f2;
        f1 = f2;
        f2 = c;
    }
    return 0;
}
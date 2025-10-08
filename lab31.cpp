#include <iostream>
using namespace std;

int main() {
    int a = 12; // 1100
    int b = 10; // 1010

    cout << "a=12(1100), b=10(1010)" << endl << endl;

    cout << "AND:  a & b  = " << (a & b) << endl;
    cout << "OR:   a | b  = " << (a | b) << endl;
    cout << "XOR:  a ^ b  = " << (a ^ b) << endl;
    cout << "NOT:  ~a     = " << (~a) << endl;
    cout << "Сдвиг влево:  a << 2 = " << (a << 2) << endl;
    cout << "Сдвиг вправо: a >> 2 = " << (a >> 2) << endl;

    return 0;
}
#include <iostream>
#include <string>

// ������� �������� ����������
// �� �������� - ��������� �����
void Value(int x) {
    x = 10;  // �������� ������ �����
}

// �� ������ - �������� � ����������
void Reference(int& x) {
    x = 20;  // �������� ������������ ����������
}

// �� ����������� ������ - ������ ������
void Const(const int& x) {
    // x = 30;  // ������ - ������ ��������
    std::cout << x;  // ����� ������ ������
}



// ������� ����������
// ������ ���������� ����������
void p(int a) {}
void p(int a, int b) {}

// ������ ���� ����������  
void p(double a) {}
void p(std::string a) {}

// ������ ������� ����������
void p(int a, double b) {}
void p(double a, int b) {}

#include <iostream>
#include <string>

// Способы передачи параметров
// По значению - создается копия
void Value(int x) {
    x = 10;  // меняется только копия
}

// По ссылке - работает с оригиналом
void Reference(int& x) {
    x = 20;  // меняется оригинальная переменная
}

// По константной ссылке - только чтение
void Const(const int& x) {
    // x = 30;  // ошибка - нельзя изменить
    std::cout << x;  // можно только читать
}



// Правила перегрузки
// Разное количество параметров
void p(int a) {}
void p(int a, int b) {}

// Разные типы параметров  
void p(double a) {}
void p(std::string a) {}

// Разный порядок параметров
void p(int a, double b) {}
void p(double a, int b) {}

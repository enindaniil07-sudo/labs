#include "fibonacci.h"

namespace fib {

    int get(int n) {
        if (n <= 0) return 0;
        int a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            int next = a + b;
            a = b;
            b = next;
        }
        return b;
    }

    bool check(int num) {
        if (num < 0) return false;
        int a = 0, b = 1;
        while (b < num) {
            int next = a + b;
            a = b;
            b = next;
        }
        return b == num || num == 0;
    }

    int find(int num) {
        if (num < 0) return -1;
        int index = 0;
        while (get(index) < num) index++;
        return get(index) == num ? index : -1;
    }

}
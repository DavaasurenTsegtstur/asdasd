#include <iostream>

int nod(int x, int y) {
    while (x != 0 && y != 0) {
        if (x > y) {
            x = x % y;
        } else {
            y = y % x;
        }
    }
    return x + y;
}

int main() {
    int a, b;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    int gcd = nod(a, b);
    int p = a / gcd;
    int q = b / gcd;
    std::cout << p << "/" << q << "=" << a << "/" << b << std::endl;
    return 0;
}
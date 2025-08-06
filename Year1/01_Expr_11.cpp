#include <iostream>
#include <cmath>

int fact(int n) {
    int t = 1;
    while (n > 1) {
        t *= n--;
    }
    return t;
}

int p(int n, int x) {
    int t = n;
    while (1 < x--) {
        t *= n;
    }
    return t;
}

int main() {
    std::cout << (
        M_PI - ((float)fact(10) / p(8, 8))
        + pow(log(9.7), 
        (7/sqrt(71)) - sin(40 * (M_PI/180))
    )
    )
    /
    (
        pow(1.2, cbrt(2.3))
    );
}

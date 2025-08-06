#include <iostream>
#include <cmath>
#include <iomanip>
#define print(x) std::cout << x << std::endl

int main() {
    double w, h;
    std::cin >> w >> h;
    std::cout << std::setprecision(15);
    print(sqrt(w*h)/60);
    print(0.024265*pow(w, 0.5378)*pow(h, 0.3964));
    print(0.0333*pow(w, (0.6157-0.0188*log10(w)))*pow(h, 0.3));
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

double a,b,c;
double q(bool mode) {
    double s = sqrt(b*b - 4*a*c);
    if (!mode) {
        s *= -1;
    }
    return (-b + s) / (2*a);
}

int main() {
    cin >> a >> b >> c;
    cout << round(q(false)*1e3)*1e-3;
    cout << " ";
    cout << round(q(true)*1e3)*1e-3;
    return 0;
}
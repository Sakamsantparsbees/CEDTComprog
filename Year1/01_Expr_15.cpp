#include <bits/stdc++.h>
using namespace std;
#define d double

int main() {
    d x;
    cin >> x;
    d logged = log(pow(x+1, 2));
    d upper = pow(x, sqrt(logged));
    cout << round(upper / (10-x) * 1e6)/1e6;
    return 0;
}
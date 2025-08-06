#include <bits/stdc++.h>
#include <format>
using namespace std;
namespace math {
    #include <cmath>
}

#define n(x, i) x * n[i]

int main() {
    int n[13] = {0};
    string t;
    cin >> t;
    for (int i = 0; i < 13; i++) {
        n[i] = t[i] - '0';
    }
    int inner =
    n(13,0) + n(12,1) + n(11,2) +
    n(10,3) + n(9,4) + n(8,5) + n(7,6) +
    n(6,7) + n(5,8) + n(4,9) + n(3,10) +
    n(2,11)
    ;
    n[12] = (11-inner%11)%10;
    cout << 
        n[0] << "-" <<
        n[1] << n[2] << n[3] << n[4] << "-" <<
        n[5] << n[6] << n[7] << n[8] << n[9] << "-" <<
        n[10] << n[11] << "-" << n[12];
    return 0;
}
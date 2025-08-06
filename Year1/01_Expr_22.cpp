#include <bits/stdc++.h>
using namespace std;
#define d double

int main() {
    d xm, ym, xe, ye, re, rp;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    d dx = xm - xe;
    d dy = ym - ye;
    d mag = sqrt(dx*dx + dy*dy);
    dx = dx / mag;
    dy = dy / mag;
    d dr = re - rp;
    dx *= dr;
    dy *= dr;
    cout << round(dx + xe) << " " << round(dy + ye);
    return 0;
}
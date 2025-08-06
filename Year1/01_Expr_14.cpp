#include <bits/stdc++.h>
using namespace std;
int main() {
    int year;
    cin >> year;
    year -= 543;
    year %= 100;
    cout << (year + (year/4) + 11) % 7;
    return 0;
}

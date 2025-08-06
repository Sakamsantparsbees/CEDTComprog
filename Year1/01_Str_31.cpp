#include <bits/stdc++.h>
using namespace std;

#define var long int
#define print(x, y) cout << x << " / " << y;

var gcd(var a, var b) {
    long remainder;
    while (b != 0) {
        remainder = a%b;
        a = b;
        b = remainder;
    }
    return a;
}

var lcm(var a, var b) {
    return (a*b) / gcd(a, b);
}

var power(var base, var expo) {
    if (expo > 0) {
        var total = base;
        while (expo-- > 1) {
            total *= base;
        }
        return total;
    } else {
        return 1;
    }
}

var strToVar(string s) {
    var base = 1;
    var total = 0;
    for (auto it = s.end() - 1; it != s.begin() - 1; it--) {
        total += ((*it) - '0') * base;
        base *= 10;
    }
    return total;
}

string removeTrailZero(string s) {
    var totalZeros = 0;
    for (auto it = s.end() - 1; it != s.begin() - 1; it--) {
        if ((*it) == '0') {
            totalZeros++;
        }
    }
    while (totalZeros-- > 0) {
        s.pop_back();
    }
    return s;
}

int main() {
    string in1, in2, in3;
    cin >> in1 >> in2 >> in3;

    string in = in1 + "." + in2;
    string t = removeTrailZero(in3);
    if (t.length() != 0) {
        in += "(" + in3 + ")";
    }

    string integer, decimal, repeated;
    bool hasRepeated;
    string::iterator it = in.begin();

    while ((*it) != '.') {
        integer.push_back((*it));
        it++;
    }

    it++;
    while ((*it) != '(' and it != in.end()) {
        decimal.push_back((*it));
        it++;
    }
    
    var divisor, dividend, gcded;

    if (it != in.end()) {
        hasRepeated = true;
        it++;
        while ((*it) != ')') {
            repeated.push_back((*it));
            it++;
        }

        divisor = strToVar(string(repeated.length(), '9') + string(decimal.length(), '0'));
        dividend = strToVar(decimal + repeated) - strToVar(decimal) + (strToVar(integer) * divisor);

    } else {
        hasRepeated = false;

        decimal = removeTrailZero(decimal);

        divisor = power(10, decimal.length());
        dividend = strToVar(decimal) + (strToVar(integer) * divisor);

    }
    
    gcded = gcd(divisor, dividend);
    divisor /= gcded;
    dividend /= gcded;

    print(dividend, divisor);
    
    return 0;
}
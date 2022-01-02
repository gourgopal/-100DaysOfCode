
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s) {
    int len = s.length();
    int decimal = 0;
    for (int i = len - 1; i >= 0; i--) {
        decimal += s[i] == '1' ? pow(2, len - i - 1) : 0;
    }
    return decimal;
}

int main() {
	cout << binaryToDecimal("1010") << endl;
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s) {
    sort(s.begin(), s.end());
    vector<char> str;
    int n = s.length();
    str.push_back(s[0]);
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == s[i]) {
            continue;
        }
        str.push_back(s[i]);
    }
    return string(str.begin(), str.end());
}

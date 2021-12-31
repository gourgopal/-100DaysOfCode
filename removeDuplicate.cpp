#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    sort(s.begin(), s.end());
    vector<char> str;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i - 1] == s[i]) {
            continue;
        }
        str.push_back(s[i]);
    }
    return string(str.begin(), str.end());
}

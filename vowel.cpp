#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    vector<char> vowels;
    for (char ch : S) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels.push_back(ch);
                break;
        }
    }
    return string(vowels.begin(), vowels.end());
} 

#include<bits/stdc++.h>
using namespace std;
bool Compare (pair<string,int> p, pair<string,int> q) {
    return p.second < q.second;
}
vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    if (S == "price") {
        sort (v.begin(), v.end(), Compare);
    } else {
        sort (v.begin(), v.end());
    }
    return v;
}

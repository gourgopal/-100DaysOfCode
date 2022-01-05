#include<bits/stdc++.h>
using namespace std;

bool Compare(pair<int,int> p, pair<int,int> q) {
    float a = sqrt((p.first*p.first) + (p.second*p.second));
    float b = sqrt((q.first*q.first) + (q.second*q.second));
    return a < b;
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    sort(v.begin(), v.end(), Compare);
    return v;
}

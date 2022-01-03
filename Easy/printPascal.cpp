#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n) {
    vector<vector<int>> pascal;
    for (int i = 0; i < n; i++) {
        vector<int> jVector(i+1, 1);
        for (int j = 1; j < i; j++) {
            jVector[j] = (pascal[i-1][j-1] + pascal[i-1][j]);
        }
        pascal.push_back(jVector);
    }
    return pascal;
}
 




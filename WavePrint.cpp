#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr) {
     vector<int> linear;
     int startCol = 0;
     int startRow = m - 1;
     int endCol = n - 1;
     
     while (startRow >= startCol) {
         for (int i = startCol; i <= endCol; i++) {
             linear.push_back(arr[i][startRow]);
         }
         startRow--;
         for (int j = endCol; j >= startCol; j--) {
             linear.push_back(arr[j][startRow]);
         }
         startRow--;
     }
     return linear;
 }

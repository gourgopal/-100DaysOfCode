#include<bits/stdc++.h>
#include<vector>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x) {
    int leftIdx = 0;
    int rightIdx = arr.size() - 1;
    int current_distance = 0;
    int min_distance = INT_MAX;
    pair<int, int> result;
    
    while (leftIdx < rightIdx) {
        current_distance = abs(x - (arr[leftIdx] + arr[rightIdx]));
        cout << "current_distance" << current_distance << endl;
        if (current_distance < min_distance) {
            min_distance = current_distance;
            result.first = arr[leftIdx];
            result.second = arr[rightIdx];
            leftIdx++;
        }
        else rightIdx--;
        cout << "leftIdx" << leftIdx << endl;
        cout << "rightIdx" << rightIdx << endl;
    }
    cout << result.first << endl;
    cout << result.second << endl;
    return result;
}
int main() {
    vector<int> A = {10, 22, 28, 29, 30, 40};
	closestSum(A, 54);
    closestSum(A, 50);

    // A = {1, 2, 3, 4, 5};
	// closestSum(A, 3);
    // closestSum(A, 6);
	return 0;
}


#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag) {
    int n = a.size();
    if (flag == 0) {
        sort(a.begin(), a.end(), greater<int>());
    }
    else {
        sort(a.begin(), a.end());
    }
    return a;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
	vector<int> result = sortingWithComparator(a, 0);
    for (int x: result) {
        cout << x << " ";
    }
	return 0;
}


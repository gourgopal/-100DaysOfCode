#include <iostream>
#include <vector>
using namespace std;

vector<int> kRotate(vector<int> a, int k) {
    int n = a.size();
    vector<int> result;
    k = k % n;
    for (int i = 0; i < n; i++) {
        if (i < k) {
            result.push_back(a[n + i - k]);
        }
        else {
            result.push_back(a[i - k]);
        }
    }
    return result;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
	vector<int> result = kRotate(a, 2);
    for (int x: result) {
        cout << x << " ";
    }
	return 0;
}


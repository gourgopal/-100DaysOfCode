
#include <iostream>
using namespace std;

int LargestSubArraySumUsingBruteForce(int a[], int n) { //O(n^3) -- BruteForce
    int largestSum = a[0];
    for (int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            int k = i;
            for(; k <= j; k++) {
                //cout << a[k] << " ";
                sum += a[k];
            }
            if (largestSum < sum) largestSum = sum;
            //cout << "[" << sum << "]" << endl;
        }
        //cout << endl;
    }
    return largestSum;
}

int LargestSubArraySumUsingPrefix(int a[], int n) { //O(n^2) -- Prefix
    int largestSum = a[0];
    int prefixArray[100];
    prefixArray[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefixArray[i] = prefixArray[i - 1] + a[i];
    }

    for (int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            largestSum = max(largestSum, i > 0 ? prefixArray[j] - prefixArray[i - 1] : prefixArray[j]);
        }
    }
    return largestSum;
}

int LargestSubArraySumUsingKadane(int a[], int n) { //O(n^1) -- Kadane
    int cs = 0;
    int maxSum = 0;
    for (int i = 0; i < n; i++) {
        cs += a[i];
        if(cs < 0) {
            cs = 0;
        }
        maxSum = max(cs, maxSum);
    }
    return maxSum;
}

int main() {
	int a[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(a)/sizeof(int);
    cout << "Array [orginal state]" << endl;
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl << endl;
    cout << LargestSubArraySumUsingBruteForce(a, n) << endl;
    cout << LargestSubArraySumUsingPrefix(a, n) << endl;
    cout << LargestSubArraySumUsingKadane(a, n) << endl;
	return 0;
}

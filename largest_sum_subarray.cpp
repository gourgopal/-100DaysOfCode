
#include <iostream>
using namespace std;

void PrintSubArrays(int a[], int n) { //using bruteforce
    int largestSum = a[0];
    for (int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            int k = i;
            for(; k <= j; k++) {
                cout << a[k] << " ";
                sum += a[k];
            }
            if (largestSum < sum) largestSum = sum; //max(largestSum, sum)
            cout << "[" << sum << "]" << endl;
        }
        cout << endl;
    }
    cout << "largest sum: " << largestSum;
}

int main() {
	int a[] = {12, 13, 14, 15};
    int n = sizeof(a)/sizeof(int);
    cout << "Array [orginal state]" <<endl;
    for (int x : a) {
        cout << x << " ";
    }
    cout <<endl;
    PrintSubArrays(a, n);
	return 0;
}

#include <iostream>
using namespace std;

void PrintPairs(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            cout << "(" << a[i] << ", " << a[j] << ")" <<endl;
        }
        cout << endl;
    }
}

int main() {
	int a[] = {12, 13, 14, 15};
    int n = sizeof(a)/sizeof(int);
    cout << "Array [orginal state]" <<endl;
    for (int x : a) {
        cout << x << " ";
    }
    cout <<endl;
    PrintPairs(a, n);
	return 0;
}


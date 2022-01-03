
#include <iostream>
using namespace std;

void Reverse(int a[], int n) {
    for (int i = 0; i < (n/2); i++) {
        swap(a[i], a[n-i-1]);
    }
}


int main() {
	int a[] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int n = sizeof(a)/sizeof(int);
    cout << "Array [orginal state]" <<endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    Reverse(a, n);
    cout << "Array [updated]" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
	return 0;
}


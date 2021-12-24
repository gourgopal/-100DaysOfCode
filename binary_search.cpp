
#include <iostream>
using namespace std;

int binary_search(int a[], int n, int key) {
    int e = n - 1;
    int s = 0;

    while (s <= e) {
        int mid = (s + e) / 2;
        cout << s << " " << mid << " " << e << endl;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
	int a[] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int key = 0; //element to search
    cin >> key;
    int n = sizeof(a)/sizeof(int);
    cout << binary_search(a, n, key) << endl;
	return 0;
}


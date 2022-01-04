
#include <iostream>
using namespace std;

template<typename T>
class Vector {
    int current_size;
    int max_size;
    T *arr;

public:

    Vector(int size = 1) {
        max_size = size;
        current_size = 0;
        arr = new T[max_size];
    }

    void push_back (const T item) {
        if (current_size == max_size) {
            max_size *= 2;
            T *temp = arr;
            arr = new T[max_size];

            //copy from arr
            for (int i = 0; i < current_size; i++) {
                arr[i] = temp[i];
            }
            delete []temp;
        }
        arr[current_size] = item;
        current_size++;
    }

    void pop_back () {
        current_size--;
    }

    T at (int const index) const {
        return arr[index];
    }

    bool isEmpty () const {
        return current_size <= 0;
    }

    int size () const {
        return current_size;
    }

    int capacity () const {
        return max_size;
    }

    T front () const {
        return arr[0];
    }

    T back () const {
        return arr[current_size - 1];
    }

    T operator[] (const int i) const {
        return arr[i];
    }
};

int main() {
	Vector<string> arr;
    cout << arr.isEmpty() << endl;
    cout << sizeof(arr) << " " << arr.capacity() << endl;
    arr.push_back("Goura");
    arr.push_back("Gopal");
    arr.push_back("Dalai");
    cout << arr.size() << " " << arr.capacity() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    for (int i = 0; i < arr.size();) {
        cout << arr.at(i++) << " ";
    }
    cout << arr.isEmpty() << endl;
    while (!arr.isEmpty()) {
        arr.pop_back();
        cout << arr.size() << " " << arr.capacity() << endl;
    }
    cout << arr.isEmpty() << endl;

    for (int i = 0; i < 10; i++) {
        arr.push_back(to_string(i) + "a");
        cout << arr.at(i) << " ";
    }
    cout << endl << arr.size() << " " << arr.capacity() << endl;

	return 0;
}


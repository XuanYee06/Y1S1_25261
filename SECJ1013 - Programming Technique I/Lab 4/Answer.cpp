#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of values:";
    cin >> n;

    // Dynamic memory allocation
    int *arr = new int[n];

    cout << "Enter values in array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);   // access using pointer
    }

    // Pointer for total
    int *total = new int;
    *total = 0;

    for (int i = 0; i < n; i++) {
        *total += *(arr + i);
    }

    cout << "Total of the values in the array is " << *total << endl;

    // Free dynamic memory
    delete[] arr;
    delete total;

    return 0;
}


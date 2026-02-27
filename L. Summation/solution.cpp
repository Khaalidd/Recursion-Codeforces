#include <iostream>

using namespace std;

long long summation(int index, int arr[], int size) {
    if(index == size - 1) return arr[index];

    return arr[index] + summation(index + 1, arr, size);
}

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << summation(0, arr, n) << "\n";

    return 0;
}
#include <iostream>
using namespace std;

void printIndices(int arr[], int i) {
    if(i < 0) {
        return;
    }

    if( i % 2 == 0) {
        cout << arr[i] << " ";
    }
    printIndices(arr, i - 1);

}


int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printIndices(arr, n - 1);

    return 0;
}
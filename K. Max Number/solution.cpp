#include <iostream>
using namespace std;

int maxNumber(int index, int arrOfNumbers[], int size) {
    if(index == size - 1) {
        return arrOfNumbers[index];
    }

    return max(arrOfNumbers[index], maxNumber(index + 1, arrOfNumbers, size));
}

int main() {

    int n;
    cin >> n;
    int arrOfNumbers[n];

    for(int i = 0; i < n; i++) {
        cin >> arrOfNumbers[i];
    }

    cout << maxNumber(0, arrOfNumbers, n);

}
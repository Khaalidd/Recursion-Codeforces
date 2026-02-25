#include <iostream>

using namespace std;

void printRecursion(int n) {
    if(n <= 0) {
        return;
    }

    cout << n;

    if(n > 1) {
        cout << " ";
    }
    printRecursion(n - 1);
}

int main() {
    int n;
    cin >> n;
    printRecursion(n);
    return 0;
}
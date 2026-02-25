#include <iostream>

using namespace std;

void printRecursion(int n) {
    if(n <= 0) {
        return;
    }


    printRecursion(n - 1);
    cout << n << endl;
}

int main() {
    printRecursion(5);
    return 0;
}
#include <iostream>

using namespace std;

void printRecursion(int n) {
    if(n <= 0) {
        return;
    }


    printRecursion(n - 1);
    cout << "Hi" << endl;
}

int main() {
    printRecursion(4);
    return 0;
}
#include <iostream>

using namespace std;

void printDigits(int n) {
    if(n < 10) {
        cout << n;
        return;
    }
    printDigits(n / 10);
    cout << " " << n % 10;
}
int main() {
    int t;
    cin >> t;

    int n;
    for(int i = 0; i < t; i++) {
        cin >> n;
        printDigits(n);
        cout << endl;
    }
    return 0;
}
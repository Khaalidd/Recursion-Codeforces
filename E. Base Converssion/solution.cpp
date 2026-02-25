#include <iostream>

using namespace std;

void toBinary(int n) {
    if(n == 1) {
        cout << 1;
        return;
    }
    toBinary(n / 2);
    cout << n % 2;
}
int main() {
    int t;
    cin >> t;

    int n;
    for(int i = 0; i < t; i++) {
        cin >> n;
        toBinary(n);
        cout << endl;
    }
    return 0;
}
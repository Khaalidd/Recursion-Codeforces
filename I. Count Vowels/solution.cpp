#include <iostream>
using namespace std;

int countVowels(int i, int size, string text) {
    if(i == size) return 0;

    char letter = tolower(text[i]);
    int counter = 0;

    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        counter++;
    }

    return counter + countVowels(i+1, size, text);
}

int main() {

    string text;

    getline(cin, text);

    int n = text.size();
    cout << countVowels(0, n, text) << "\n";
    return 0;
}
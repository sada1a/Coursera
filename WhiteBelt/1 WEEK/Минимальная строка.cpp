#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;

    string minWord = word1;
    if (word2 < minWord) {
        minWord = word2;
    }
    if (word3 < minWord) {
        minWord = word3;
    }

    cout << minWord << endl;
    return 0;
}

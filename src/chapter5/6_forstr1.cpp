//
// Created by xxp on 2022/1/17.
//

#include <iostream>
#include <string>

int main() {
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // reverse
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nBye.\n";
    return 0;

}
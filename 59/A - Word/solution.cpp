#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string word;
    cin >> word; // Read the word
 
    int uppercase = 0;
    int lowercase = 0;
 
    // 1. Count them up
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            uppercase++;
        } else {
            lowercase++;
        }
    }
 
    // 2. Change the letters inside the string
    if (uppercase > lowercase) {
        // Change all lowercase to uppercase
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                word[i] = word[i] - 32; 
            }
        }
    } else {
        // Change all uppercase to lowercase
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                word[i] = word[i] + 32; 
            }
        }
    }
 
    // 3. Print the final modified word all at once!
    cout << word << endl;
 
    return 0;
}
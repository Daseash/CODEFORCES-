#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string n;
    cin >> n;
    
    int lucky_count = 0;
    
    // Count the number of lucky digits
    for (char digit : n) {
        if (digit == '4' || digit == '7') {
            lucky_count++;
        }
    }
    
    // Check if the count itself is a lucky number (4 or 7)
    if (lucky_count == 4 || lucky_count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
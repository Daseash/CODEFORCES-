#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    long long k, n, w;
    cin >> k >> n >> w;
    
    // Calculate total cost using the arithmetic sum formula
    long long total_cost = k * (w * (w + 1)) / 2;
    
    // Calculate the amount to borrow, ensuring it doesn't go below 0
    long long borrow = max(0LL, total_cost - n);
    
    cout << borrow << endl;
    
    return 0;
}
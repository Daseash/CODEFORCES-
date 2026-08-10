#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    int left = 1;
    int right = n * n;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout << left << " " << right;
            if (j < n / 2 - 1) cout << " ";
            left++;
            right--;
        }
        cout << "
";
    }
 
    return 0;
}
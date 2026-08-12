#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
 
    int maxVal = *max_element(a.begin(), a.end());
    int minVal = *min_element(a.begin(), a.end());
 
    int maxIdx = -1, minIdx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == maxVal && maxIdx == -1) maxIdx = i;   // first max
        if (a[i] == minVal) minIdx = i;                   // last min (keep updating)
    }
 
    int moves = maxIdx + (n - 1 - minIdx);
    if (maxIdx > minIdx) moves--;
 
    cout << moves << endl;
}
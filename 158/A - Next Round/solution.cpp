#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
 
    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }
 
    // The score of the k-th place finisher (0-indexed)
    int target_score = scores[k - 1];
    int advancers = 0;
 
    for (int i = 0; i < n; ++i) {
        // Condition: score >= k-th finisher's score AND score > 0
        if (scores[i] >= target_score && scores[i] > 0) {
            advancers++;
        } else {
            // Since the array is sorted in descending order, 
            // if this element doesn't qualify, subsequent ones won't either.
            break;
        }
    }
 
    cout << advancers << "
";
 
    return 0;
}
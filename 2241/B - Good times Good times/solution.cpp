#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long x;
        scanf("%lld", &x);
        
        // count digits of x
        int d = to_string(x).size();
        
        long long y = 1;
        for(int i = 0; i < d; i++) y *= 10;
        y += 1;                 // y = 10^d + 1
        
        printf("%lld
", y);
    }
}
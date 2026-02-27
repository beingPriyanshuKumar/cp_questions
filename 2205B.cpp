#include <bits/stdc++.h>
using namespace std ;
#define int long long

signed main() {   
    int t;
    cin>>t;
    while (t--) {
         int n;
        cin>>n;
        int k=1;
        for (int i=2; i*i<=n;i++) {
            if (n % i == 0) {
                k =k*i; 
                while (n%i == 0) {
                    n = n/i;
                }
            }
        }
        if (n > 1) {
            k = k*n;
        }
        
        cout << k << endl;
    }
    
    return 0;
}
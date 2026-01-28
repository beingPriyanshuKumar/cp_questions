#include <bits/stdc++.h>
using namespace std ;
#define int long long
signed main(){
   int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int ar[n];
            int sum=0;
            for (int i=0;i<n-1;i++){
                cin >> ar[i];
            }
            for (int i=0;i<n-1;i++){
                sum = sum + ar[i];
            }
            int ans = -1*sum;
            cout << ans << endl;
        }
    }
    return 0;
    
}
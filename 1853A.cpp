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
            for(int i=0; i<n; i++){
                cin >> ar[i];
            }
            int c = INT_MAX;
            for (int i = 0; i<n-1; i++){
                if (ar[i] <= ar[i+1]){
                    int diff = ar[i+1] - ar[i]; 
                    int d = diff/2 + 1; 
                    c = min(d,c); 
                }
                else {
                    c = 0;
                }
            }
            cout << c << endl; 
        }
    }
    return 0;
    
}
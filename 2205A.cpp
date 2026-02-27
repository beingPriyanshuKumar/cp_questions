#include <bits/stdc++.h>
using namespace std ;
#define int long long
signed main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> p(n);
            for (int i = 0; i < n; i++) {
                cin >> p[i];
            }
            for(int i =0 ;i<n;i++){
                if(p[i]==n){
                    swap(p[0],p[i]);
                }
            }
            for(int i=0 ; i<n ;i++){
                cout << p[i] << " " ;
            }
            cout << endl;
        }
    }
    
    return 0;
}
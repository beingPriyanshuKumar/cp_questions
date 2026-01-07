#include <bits/stdc++.h>
using namespace std ;
#define int long long
signed main(){
   int t;
    cin >> t;
        while (t--) {  
        int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            sort(a.begin(), a.end());
            int f = a[0];
            int l = a[n - 1];
            if (f == l) {
                cout << "Yes" << endl;
            } 
            else {
                int c = 0;
                int d = 0;
                for (int x : a) {
                    if (x == f) c++;
                    else if (x == l) d++;
                }
                if (c + d == n && abs(c - d) <= 1) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            }
        }
    return 0;
    
}
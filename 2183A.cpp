#include <bits/stdc++.h>
using namespace std ;
#define int long long
signed main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int a[n];
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            if (a[0] == 1 || a[n - 1] == 1) {
                cout << "Alice" << "\n";
            } 
            else {
                cout << "Bob" << "\n";
            }
        }
    }
    return 0;
}
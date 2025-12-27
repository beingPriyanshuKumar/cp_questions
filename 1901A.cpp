#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, x;
            cin >> n >> x;
            int l = 0;
            int m = 0;
            for (int i = 0; i < n; i++) {
                int a;
                cin >> a;
                m = max(m, a - l);
                l = a;
            }
            m = max(m, 2 * (x - l));
            cout << m << endl;
        }
    }
    return 0;

}
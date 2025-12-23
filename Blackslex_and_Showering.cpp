#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
        cin >> a[i];
        }
        int total = 0;
        for (int i = 0; i < n - 1; ++i) {
            total += abs(a[i] - a[i+1]);
        }
        int m = 0;
        int rf = abs(a[0] - a[1]);
        m = max(m, rf);
        int rl = abs(a[n-2] - a[n-1]);
        m = max(m, rl);
        for (int i = 1; i < n - 1; ++i) {
            int old = abs(a[i-1] - a[i]) + abs(a[i] - a[i+1]);
            int neww = abs(a[i-1] - a[i+1]);
            int c = old - neww;
            m = max(m, c);
        }
        cout << total - m << endl;
    }
    return 0;
}
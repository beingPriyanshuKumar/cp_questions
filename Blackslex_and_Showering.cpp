#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
        cin >> a[i];
        }
        long long total = 0;
        for (int i = 0; i < n - 1; ++i) {
            total += abs(a[i] - a[i+1]);
        }
        long long m = 0;
        long long rf = abs(a[0] - a[1]);
        m = max(m, rf);
        long long rl = abs(a[n-2] - a[n-1]);
        m = max(m, rl);
        for (int i = 1; i < n - 1; ++i) {
            long long old = abs(a[i-1] - a[i]) + abs(a[i] - a[i+1]);
            long long neww = abs(a[i-1] - a[i+1]);
            long long c = old - neww;
            m = max(m, c);
        }
        cout << total - m << endl;
    }
    return 0;
}
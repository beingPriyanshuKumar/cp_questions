#include <bits/stdc++.h>
using namespace std;

// Using long long is good practice in CP to avoid overflow, 
// though for MEX and N usually int is sufficient.
#define int long long

void solve() {
    
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
    cin >> n >> k;
    
    vector<int> a(n); 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int c = 0;
    for (int x : a) {
        if (x == c) {
            c++;
        }
    }
    if (c < k - 1) {
        cout << c<< endl;
    } else {
        cout << k - 1 << endl;
    }
    }
    return 0;
}
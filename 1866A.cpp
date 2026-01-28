#include <bits/stdc++.h>
using namespace std ;
#define int long long
signed main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long m = INT_MAX;
    for (int i = 0; i < n; i++) {
        m = min(m, abs(a[i]));
    }
    cout << m << endl;
    return 0;
    
}
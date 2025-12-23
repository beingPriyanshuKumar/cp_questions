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
            for (int i=0;i<n;i++) {
                cin>>a[i];
            }
            sort(a.begin(),a.end());
            int m=a[0];
            int min_diff=2000000000;
            for (int i=1; i<n; i++) {
                int diff=a[i] - m;
                if (diff<min_diff) {
                    min_diff=diff;
                }
            }
            if (min_diff>m) {
                cout<<min_diff<< endl;
            } else {
                cout<<m<<endl;
            }
        }
        
    return 0;
}
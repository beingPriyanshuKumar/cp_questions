#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
int t;
    cin >> t;
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            int em = 0;
            bool inf = false;
            for (int i = 0; i < n; i++) {
                if (s[i] == '.') {
                    em++;
                }
                if (i >= 2 && s[i] == '.' && s[i-1] == '.' && s[i-2] == '.') {
                    inf = true;
                }
            }
            if (inf) {
                cout << 2 << endl;
            } else {
                cout << em << endl;
            }
        }
    return 0;
}
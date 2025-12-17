#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        if (n % 2 != 0) {
            cout << 0 << endl;
        }
        else{
            int count = 0;
            for (int i = 0; i * 4 <= n; i++) {
                int legs = n - (i * 4);
                if (legs % 2 == 0) {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}
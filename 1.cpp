#include <bits/stdc++.h>
using namespace std ;
#define int long long
signed main(){
   int t=13;
    
        while (t--) {
            float a;
            float b;
            cin >> a >> b;
            float res = sqrt(abs(a*a - b*b));
            cout << res << endl;
        }
    
    return 0;
    
}
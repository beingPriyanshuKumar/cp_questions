#include <bits/stdc++.h>
using namespace std ;
#define int long long
signed main(){
    int t;
    if (cin >> t) {
        while (t--) {
            int a;
            int b;
            int c;
            cin >> a>> b>> c;
            if (c%2==1){
                if (b>a){cout << "Second" << endl;}
                else {cout << "First"<< endl;}
            }
            else{
                if (a>b) {cout << "First"<< endl;}
                else {cout << "Second"<< endl;}    
            }
                    
        }
    }
    return 0;
    
}
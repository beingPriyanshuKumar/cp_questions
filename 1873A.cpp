#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<int> p(n);
            int pos_n = 0;
            
            for (int i = 0; i < n; i++) {
                cin >> p[i];
                if (p[i] == n) {
                    pos_n = i;
                }
            }
            
            int uid = -1;
            int max = 0;
            for (int i = 0; i < n - 1; i++) {
                if (p[i] > max) {
                    max = p[i];
                }
                if (max == i + 1) {
                    uid = i;
                    break;
                }
            }
            if (uid != -1) {
                int temp = p[uid];
                p[uid] = p[pos_n];
                p[pos_n] = temp;
            }
            for (int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}
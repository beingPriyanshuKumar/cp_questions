#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
        cin >> arr[i];
        }
        int count = 0;
        for( int i = 0 ; i < n-1 ; i++){
            int maxA = arr[0];
            for( int j = 0 ; j <= i; j++ ){
            if(arr[j] > maxA) maxA = arr[j];
       }
            int maxB = arr[i+1];
            for( int j = i+1 ; j < n ; j ++){
                if(arr[j] > maxB) maxB = arr[j];
            }
            if(maxA > maxB){count ++;}   
        }
        if (count == n){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
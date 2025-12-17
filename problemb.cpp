#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=-1;
        for(int i=0;i<n;i++){
            for(int j=2;j<INT_MAX;j++){
                if(__gcd(j,arr[i])==1){
                    a=j;
                    break;
                }
            }
            
        }
        
        cout<<a<<endl;
    }
}
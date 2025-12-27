#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin >>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int a=arr[0];
        int b=1;
        for(int j=0;j<n;j++){
            if(arr[j]!=a){
                b=0;
                break;
            }
        }
        if(b==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        string name;
        string name2;
        cin >> name >> name2;
        sort(name.begin(),name.end());
        sort(name2.begin(),name2.end());
        if(name==name2 ){
            cout<<"yes"<<endl;
        }
        else{cout<<"no"<<endl;}
    }
}
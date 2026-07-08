#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(char ch:s){
            if(ch=='0') c++;
        }
        if(c%2==0) cout<<"BOB"<<endl;
        else{
            if(c==1) cout<<"BOB"<<endl;
            else cout<<"ALICE"<<endl;
        }
    }
}
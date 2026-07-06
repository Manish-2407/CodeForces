#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int a=0;
        for(int i=1;i<n-1;i++){
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
                cout<<2<<endl;
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<count(s.begin(),s.end(),'.')<<endl;
        }
    }
}
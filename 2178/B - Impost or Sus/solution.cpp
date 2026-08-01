#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        int n=s.size();
        if(s[0]=='u') c++;
        if(s[n-1]=='u') c++;
        for(int i=2;i<n-1;i++){
            if(s[i]=='u' && s[i-1]=='u'){
                c++;
                s[i]='s';
            }
        }
        cout<<c<<endl;
    }
}
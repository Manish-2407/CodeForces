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
        int l=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]) l++;
        }
        int m=0;
        for(int i=1;i<n-1;i++){
            if(s[i-1]==s[i+1] && s[i]!=s[i-1]){
                m=max(m,2);
            }
            else if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                m=max(m,1);
            }
        }
        cout<<l-m<<endl;
    }
}
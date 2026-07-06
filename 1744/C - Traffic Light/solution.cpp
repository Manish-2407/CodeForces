#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char ch;
        cin>>n>>ch;
        string s;
        cin>>s;
        vector<int> a;
        vector<int> b;
        if(ch=='g'){
            cout<<0<<endl;
        }
        else{
            int m=0,index=-1;
            s=s+s;
            for(int i=2*n-1;i>-1;i--){
                if(s[i]=='g'){
                    index=i;
                }
                if(s[i]==ch && index!=-1 && i<n){
                    m=max(m,index-i);
                }
            }
            cout<<m<<endl;
        }
    }
}
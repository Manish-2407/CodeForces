#include <bits/stdc++.h>
using namespace std;
 
int main(){
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    string s1="qwertyuiopasdfghjkl;zxcvbnm,./";
    int a;
    if(ch=='L') a=1;
    else a=-1;
    string ans="";
    for(int i=0;i<s.size();i++){
        int p=s1.find(s[i]);
        ans+=s1[p+a];
    }
    cout<<ans<<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    int p=0,n=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.find("++")!=string::npos) p++;
        if(s.find("--")!=string::npos) n++;
    }
    cout<<(p-n)<<endl;
}
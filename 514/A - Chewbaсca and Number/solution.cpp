#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        int d=s[i]-'0';
        if(d>=5){
            if(i==0 && d==9) continue;
            s[i]=(9-d)+'0';
        }
    }
    cout<<s<<endl;
}
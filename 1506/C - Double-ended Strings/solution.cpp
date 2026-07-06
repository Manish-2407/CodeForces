#include <bits/stdc++.h>
using namespace std;
 
bool con(string s){
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,c="";
        cin>>a;
        cin>>b;
        
        int m=0;
        int n=a.length();
 
        for(int i=0;i<n;i++){
            for(int j=1;(j+i)<=n;j++){
                string x=a.substr(i,j);
 
                if(b.find(x) != string::npos){
                    m=max(m,int(x.length()));
                }
            }
        }
        cout<<(a.size()+b.size()-2*m)<<endl;
    }
}
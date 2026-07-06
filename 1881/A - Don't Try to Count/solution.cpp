#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,x;
        cin>>x;
        cin>>s;
        int b=x.size();
        int c=0,a=0;
        if(x.size()>s.size()){
        while(x.size()<=5*b){
            if(x.find(s)==string::npos){
                x=x+x;
                c++;
            }
            else{
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<-1<<endl;
        }
        else{
            cout<<c<<endl;
        }
        }
        else{
        while(x.size()<=5*s.size()){
            if(x.find(s)==string::npos){
                x=x+x;
                c++;
            }
            else{
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<-1<<endl;
        }
        else{
            cout<<c<<endl;
        }
        }
    }
}
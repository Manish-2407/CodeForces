#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        bool b=false;
        int f2=0,f3=0;
        while(n!=1){
            if(n%2==0){
                n=n/2;
                f2++;
            }
            else if(n%3==0){
                n=n/3;
                f3++;
            }
            else{
                b=true;
                break;
            }
        }
        if(b){
            cout<<-1<<endl;
        }
        else{
            if(f2==f3){
                cout<<f2<<endl;
            }
            else if(f3>f2){
                cout<<f3+(f3-f2)<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}
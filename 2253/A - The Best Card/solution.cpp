#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool b=true;
        int t=n+1;
        for(int i=2;i*i<=t;i++){
            if(t%i==0){
                b=false;
                break;
            }
        }
        cout<<(b ? "YES":"NO")<<endl;
    }
}
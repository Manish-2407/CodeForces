#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,x,y,k;
        cin>>n>>x>>y>>k;
        long long d=abs(x-y);
        d=min(d,n-d);
        if(n<=3){
            cout<<1<<endl;
        }
        else{
            cout<<d+k<<endl;
        }
    }
}
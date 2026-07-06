#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        long long total =k+k*b;
        long long ans=((total+a-3)/(a-1));
        ans+=k;
        cout<<ans<<endl;
    }
}
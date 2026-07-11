#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans;
    if(m*a<=b){
        ans=n*a;
    }
    else{
        long long q=n/m;
        long long r=n%m;
        ans=min((q*b)+(r*a),((n+m-1)/m)*b);
    }
    cout<<ans<<endl;
}
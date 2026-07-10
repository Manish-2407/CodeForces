#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long a,b;
    cin>>a>>b;
    long long ar[a];
    long long br[b];
    for(long long i=0;i<a;i++) cin>>ar[i];
    for(long long i=0;i<b;i++) cin>>br[i];
    long long D=0;
    for(long long i=1;i<a;i++){
        long long dif=abs(ar[i]-ar[0]);
        D=__gcd(D,dif);
    }
    for(long long i=0;i<b;i++){
        long long x=__gcd(D,ar[0]+br[i]);
        cout<<x<<(i==b-1 ? "":" ");
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long> a(n+1);
        vector<long long> sum(n+1,0);
        vector<long long> pm(n+1,0);
 
        for(long long i=1;i<=n;i++){
            cin>>a[i];
            sum[i]=sum[i-1]+a[i];
            pm[i]=max(pm[i-1],a[i]);
        }
 
        for(long long i=0;i<q;i++){
            long long k;
            cin>>k;
 
            auto f=upper_bound(pm.begin()+1,pm.end(),k);
            long long ind=distance(pm.begin(),f)-1;
            cout<<sum[ind]<<(i==q-1 ? "" : " ");
        }
        cout<<"
";
    }
}
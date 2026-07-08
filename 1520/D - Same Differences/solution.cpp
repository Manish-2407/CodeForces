#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long m=0;
        vector<long long> v(n);
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            v[i]=x-i;
        }
        long long c=1;
        long long ans=0;
        sort(v.begin(),v.end());
        for(long long i=1;i<n;i++){
            if(v[i]==v[i-1]){
                c++;
            }
            else{
                ans+=(c*(c-1))/2;
                c=1;
            }
        }
        ans+=(c*(c-1))/2;
        cout<<ans<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        vector<long long> ar(a);
        vector<long long> br(b);
        for(long long i=0;i<a;i++) cin>>ar[i];
        for(long long i=0;i<b;i++) cin>>br[i];
        sort(br.begin(),br.end());
 
        long long pre[a];
        for(long long i=0;i<a;i++){
            pre[i+1]=pre[i]+ar[i];
        }
 
        long long sum=0;
        long long v=0;
        for(long long x:br){
            sum+=abs(pre[x]-pre[v]);
            v=x;
        }
        sum+=(pre[a]-pre[v]);
        cout<<sum<<endl;
    }
}
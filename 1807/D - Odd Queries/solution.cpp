#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long> ar(n+1);
        vector<long long> pre(n+1,0);
 
        for(int i=1;i<n+1;i++){
            cin>>ar[i];
            pre[i]=pre[i-1]+ar[i];
        }
 
        long long sum=pre[n];
 
        while(q--){
            int a,b,k;
            cin>>a>>b>>k;
            
            int r=pre[b]-pre[a-1];
            int x=b-a+1;
            int nsum=sum-r+(x*k);
 
            if(nsum%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}
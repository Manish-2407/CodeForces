#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    vector<long long> c(100005,0);
    long long m=0;
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
        c[x]++;
        m=max(m,x);
    }
    vector<long long> v(m+1,0);
    if(m>0){
        v[1]=c[1];
    }
 
    for(long long i=2;i<=m;i++){
        v[i]=max(v[i-1],v[i-2]+i*c[i]);
    }
    cout<<v[m]<<endl;
}
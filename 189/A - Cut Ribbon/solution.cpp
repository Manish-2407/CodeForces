#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> v(n+1,-1e9);
    v[0]=0;
 
    for(int i=1;i<=n;i++){
        if(i>=a) v[i]=max(v[i],v[i-a]+1);
        if(i>=b) v[i]=max(v[i],v[i-b]+1);
        if(i>=c) v[i]=max(v[i],v[i-c]+1);
    }
    cout<<v[n]<<endl;
}
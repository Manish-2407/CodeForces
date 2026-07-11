#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];
    int mi=2000;
    sort(v.begin(),v.end());
    for(int i=0;i<=(m-n);i++){
        int d=v[i+n-1]-v[i];
        mi=min(mi,d);
    }
    cout<<mi<<endl;
}
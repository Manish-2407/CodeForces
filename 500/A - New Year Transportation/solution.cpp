#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,t;
    cin>>n>>t;
    int ar[n+1];
    for(int i=1;i<=n;i++) cin>>ar[i];
    int c=1;
    while(c<t){
        c+=ar[c];
    }
    cout<<(c==t ? "YES":"NO")<<endl;
}
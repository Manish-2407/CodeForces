#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int g=__gcd(x,y);
        bool b=true;
 
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(x%g != i%g){
                b=false;
            }
        }
        cout<<(b ? "YES":"NO")<<endl;
    }
}
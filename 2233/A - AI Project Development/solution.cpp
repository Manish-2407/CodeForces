#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        
        int no_ai=(n+x+y-1)/(x+y);
 
        int with_ai=0;
 
        if((z*x)>=n){
            with_ai=(n+x-1)/x;
        }
        else{
            int a=n-(z*x);
            int b=x+10*y;
            with_ai=(a+b-1)/b;
            with_ai+=z;
        }
        cout<<min(no_ai,with_ai)<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int x;
    int ce=0,co=0,ie=0,io=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x%2==0){
            ce++;
            ie=i;
        }
        else{
            co++;
            io=i;
        }
    }
    if(ce==1) cout<<ie<<endl;
    if(co==1) cout<<io<<endl;
}
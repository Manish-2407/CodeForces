#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int x,y,z;
    int ax=0,ay=0,az=0;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        ax+=x;
        ay+=y;
        az+=z;
    }
    if(ax==0 && ay==0 && az==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
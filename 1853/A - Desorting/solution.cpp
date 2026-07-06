#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long m=1000000000;
        int a=-1;
        for (int i=0;i<n-1;i++){
            if(v[i+1]-v[i]<0){
                cout<<0<<endl;
                a=1;
                break;
            }
            else{
                int l=(v[i+1]-v[i])/2+1;
                if(l<m){
                    m=l;
                }
            }
        }
        if(a==-1){
            cout<<m<<endl;
        }
    }
}
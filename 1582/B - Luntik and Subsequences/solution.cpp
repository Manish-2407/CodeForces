#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int c0=0,c1=0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]==0){
                c0++;
            }
            else if(v[i]==1){
                c1++;
            }
        }
        if(c1==0){
            cout<<0<<endl;
        }
        else{
            long long l=pow(2,c0);
            cout<<l*c1<<endl;
        }
    }
}
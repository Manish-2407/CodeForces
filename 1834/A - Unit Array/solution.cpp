#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,0);
        int cp=0,cn=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                cp++;
            }
            else{
                cn++;
            }
        }
        if(cp>=cn){
            if(cn%2==0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            int ans;
            if((cn-cp)%2==0){
                ans=(cn-cp)/2;
            }
            else{
                ans=(cn-cp)/2+1;
            }
            if((cn-ans)%2==0){
                ans=ans;
            }
            else{
                ans++;
            }
            cout<<ans<<endl;
        }
    }
}
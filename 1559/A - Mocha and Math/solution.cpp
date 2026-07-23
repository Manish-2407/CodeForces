#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i==0){
                ans=x;
            }
            else{
                ans=ans&x;
            }
        }
        cout<<ans<<endl;
    }
}   
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        int ans=1;
        int dir=0;
 
        for(int i=1;i<n;i++){
            if(v[i]>v[i-1]){
                if(dir!=1){
                    ans++;
                    dir=1;
                }
            }
            else if(v[i]<v[i-1]){
                if(dir!=-1){
                    ans++;
                    dir=-1;
                }
            }
        }
        cout<<ans<<endl;
    }
}
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
 
        int m=1,c=1;
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                c++;
            }
            else{
                c=1;
            }
            m=max(m,c);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int x=m*pow(2,i);
            if(x>=n){
                cout<<ans<<endl;
                break;
            }
            else{
                ans++;
                ans+=min(x,n-x);
            }
        }
    }
}
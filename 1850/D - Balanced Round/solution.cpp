#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int m=0,c=1;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if((v[i]-v[i-1])<=k){
                c++;
            }
            else{
                m=max(m,c);
                c=1;
            }
            
        }
        m=max(m,c);
        cout<<n-m<<endl;
    }
}
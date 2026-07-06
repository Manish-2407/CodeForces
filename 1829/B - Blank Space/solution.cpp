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
        
        int m=0,c=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                c++;
            }
            else{
                c=0;
            }
            m=max(m,c);
        }
        cout<<m<<endl;
    }
}
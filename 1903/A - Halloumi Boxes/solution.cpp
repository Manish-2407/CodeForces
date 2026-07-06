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
 
        bool b=true;
        for(int i=0;i<n-1;i++){
            if(v[i]<=v[i+1]){
                continue;
            }
            else{
                b=false;
                break;
            }
        }
        if(b){
            cout<<"YES"<<endl;
        }
        else{
            if(n==1){
                cout<<"YES"<<endl;
            }
            else{
                if(k>1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}
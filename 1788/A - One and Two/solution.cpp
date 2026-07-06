#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i]; 
        }
        int c=count(v.begin(),v.end(),2);
 
        if(c%2==1){
            cout<<-1<<endl;
        }
 
        else{
            int k=0,ans;
            for(int i=0;i<n;i++){
                if(v[i]==2){
                    k++;
                }
                if(k==(c/2)){
                    ans=i+1;
                    break;
                }
                
            }
            cout<<ans<<endl;
        }
    }
}
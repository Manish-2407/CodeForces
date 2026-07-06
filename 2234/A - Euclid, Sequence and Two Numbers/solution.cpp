#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        sort(ar.rbegin(),ar.rend());
        bool b=true;
        for(int i=0;i<=n-3;i++){
            if(ar[i]%ar[i+1]!=ar[i+2]){
                b=false;
                break;
            }
        }
        if(b){
            cout<<ar[0]<<" "<<ar[1]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
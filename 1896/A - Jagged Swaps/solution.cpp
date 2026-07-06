#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ar(n);
        vector<int> x(n);
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            x[i]=ar[i];
            a[i]=(i+1);
        }
        sort(x.begin(),x.end());
        if((ar[0]==1)){
            if(x==a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
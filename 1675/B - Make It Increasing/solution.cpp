#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int c=0;
        bool b=true;
        for(int i=n-2;i>-1;i--){
            while(v[i]>=v[i+1] && v[i]>0){
                c++;
                v[i]/=2;
            }
            if(v[i]>=v[i+1]){
                b=false;
                break;
            }
        }
        if(b){
            cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
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
        vector<int> ar;
        for(int i=0;i<n;i++){
            if(count(ar.begin(),ar.end(),v[i])==0){
                ar.push_back(v[i]);
            }
        }
        if(ar.size()==1){
            cout<<"Yes"<<endl;
        }
        else if(ar.size()==2){
            int c1=count(v.begin(),v.end(),ar[0]);
            int c2=count(v.begin(),v.end(),ar[1]);
            if(abs(c1-c2)<=1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
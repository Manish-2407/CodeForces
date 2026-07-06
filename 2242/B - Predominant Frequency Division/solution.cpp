#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        vector<int> s1(n),s2(n);
        s1[0]=(ar[0]==1 ? 1:-1);
        s2[0]=(ar[0]<=2 ? 1:-1);
        for(int i=1;i<n;i++){
            s1[i]=s1[i-1]+(ar[i]==1 ? 1:-1);
            s2[i]=s2[i-1]+(ar[i]<=2 ? 1:-1);
        }
        vector<int> v(n);
        v[n-2]=s2[n-2];
        for(int i=n-3;i>=0;i--){
            v[i]=max(v[i+1],s2[i]);
        }
        bool b=false;
        for(int i=0;i<n-2;i++){
            if(s1[i]>=0 && v[i+1]>=s2[i]){
                b=true;
                break;
            }
        }
        if(b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
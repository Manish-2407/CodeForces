#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        long long L = 0;
        long long m = ar[0];
        for (int i = 1; i < n; ++i) {
            if (m > ar[i]) {
                L = max(L, m - ar[i]);
            }
            m = max(m, ar[i]);
        }
        bool b=true;
        long long k=max(1LL,L);
        long long p=ar[0];
        for(int i=1;i<n;i++){
            if(p<=ar[i]){
                p=ar[i];
            }
            else if(p<=ar[i]+k){
                p=ar[i]+k;
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
            cout<<"NO"<<endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int my_gcd(int a, int b) {
    return b == 0 ? a : my_gcd(b, a % b);
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ans=0,m=0;
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1){
            cout<<0<<endl;
        }
        else{
            vector<int> v(n/2);
            for(int i=0;i<n/2;i++){
                v[i]=abs(a[i]-a[n-i-1]);        
            }
            int g=0;
            for(int i=0;i<v.size();i++){
                g=my_gcd(g,v[i]);
            }
            cout<<g<<endl;
        }
    }
}
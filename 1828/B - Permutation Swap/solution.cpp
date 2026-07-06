#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int diff[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            diff[i]=abs(ar[i]-(i+1));
        }
        int a=diff[0];
        for(int i=1;i<n;i++){
            if(a==1){
                break;
            }
            a=gcd(a,diff[i]);
        }
        cout<<a<<endl;
    }
}
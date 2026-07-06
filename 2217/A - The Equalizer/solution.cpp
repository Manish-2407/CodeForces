#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        int sum=0;
        for(int i=0;i<n;i++) {cin>>ar[i]; sum+=ar[i];}
 
        if(sum%2!=0 || n%2==0 || k%2==0){
            cout<<"YES"<<"
";
        }
        else{
            cout<<"NO
";
        }
    }
}
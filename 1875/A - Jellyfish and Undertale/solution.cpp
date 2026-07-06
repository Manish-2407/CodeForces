#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        long long sum=b;
        for(int i=0;i<n;i++){
            sum=sum+min(ar[i],a-1);
        }
        cout<<sum<<endl;
    }
}
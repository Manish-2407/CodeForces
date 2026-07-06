#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        for(int i=1;i<=n;i++){
            long long mul=n/i;
            sum+=mul*mul;
        }
        cout<<sum<<endl;
    }
}
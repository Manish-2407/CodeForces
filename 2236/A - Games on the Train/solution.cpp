#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
 
        long long maxh=0;
        long long minh=10;
        for(long long i=0;i<n;i++){
            long long h;
            cin>>h;
            maxh=max(maxh,h);
            minh=min(minh,h);
        }
        cout<<maxh-minh+1<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long m=2e18;
        long long sum=0;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=x;
            long long l=sum/(i+1);
            m=min(m,l);
            cout<<m<<(i==n-1 ? "":" ");
        }
        cout<<endl;
    }
}
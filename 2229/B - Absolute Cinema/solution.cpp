#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        long long b[n];
        long long ma=0,mb=0;
        for(long long i=0;i<n;i++){
            cin>>a[i]; 
            ma=max(ma,a[i]);
        }
        for(long long i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<a[i]){
                long long c=b[i];
                b[i]=a[i];
                a[i]=c;
            }
        }
        sort(a,a+n);
        long long s=0;
        for(long long i=0;i<n;i++) s+=b[i];
        cout<<a[n-1]+s<<endl;
    }
}
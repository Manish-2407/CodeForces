#include <bits/stdc++.h>
using namespace std;
 
long long prime(long long e){
    long long c=e;
    for(long long i=2;i*i<=e;i++){
        if(e%i==0){
            c=i;
            break;
        }
    }
    return c;
}
 
int fact(long long f){
    for(long long i=f/2+1;i>1;i--){
        if(f%i==0){
            return i;
        }
    }
    return 1;
}
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            long long v=prime(n);
            cout<<n/v<<" "<<n-n/v<<endl;
        }
    }
}
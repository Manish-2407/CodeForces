#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long k,x;
        cin>>k>>x;
        if(x>=(k*k)){
            cout<<(2*k-1)<<endl;
        }
        else{
            if(x<(k*(k+1))/2){
                int a=(1+sqrt(1+8*x))/2-1;
                cout<<((1+sqrt(1+8*x))/2-1==a ? a:a+1)<<endl;
            }
            else if(x==(k*(k+1))/2){
                cout<<k<<endl;
            }
            else{
                x=x-(k*(k+1)/2);
                long long a=(k*(k-1)/2)-x;
                long long m=(1+sqrt(1+8*a))/2;
                cout<<k+k-m<<endl;
            }
        }
    }
}
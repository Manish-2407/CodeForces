#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;
        long long ar[n];
        for(long long i=0;i<n;i++) cin>>ar[i];
 
        long long l=1;
        long long h=10e9;
        long long sum=0;
        while(l<=h){
            long long mid=l+((h-l)/2);
            sum=0;
            for(long long i=0;i<n;i++){
                sum+=(ar[i]+2*mid)*(ar[i]+2*mid);
                if(c<sum){
                    break;
                }
            }
            if(sum==c){
                cout<<mid<<endl;
                break;
            }
            else if(sum>c){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    long long sum=0;
    for(long long i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    long long sumc=sum;
    long long sum1=0;
    long long c=0;
    sort(v.begin(),v.end());
    for(long long i=n-1;i>=0;i--){
        sum-=v[i];
        sum1+=v[i];
        c++;
        if(sum1>sum){
            break;
        }
    }
    cout<<c<<endl;
    // sum=sumc;
    // sum1=0;
    // long long c1=0;
    // for(long long i=0;i<n;i++){
    //     sum-=v[i];
    //     sum1+=v[i];
    //     c1++;
    //     if(sum1>sum){
    //         break;
    //     }
    // }
    // cout<<min(c,c1)<<endl;
}
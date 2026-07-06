#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ar[n];
        for(long long i=0;i<n;i++){
            cin>>ar[i];
        }
        long long m=0;
        for(long long i=1;i<=n;i++){
            if(n%i==0){
                long long k=n/i;
                vector<long long> sum;
                long long s=0;
                for(long long j=0;j<n;j++){
                    s=s+ar[j];
                    if((j+1)%k==0){
                        sum.push_back(s);
                        s=0;
                    }
                }
                sort(sum.begin(),sum.end());
                m=max(m,sum[sum.size()-1]-sum[0]);
            }
        }
        cout<<m<<endl;
    }
}
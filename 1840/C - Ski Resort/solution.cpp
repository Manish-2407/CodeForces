#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long> v(n);
        vector<long long> c;
        long long count=0;
        for(long long i=0;i<n;i++){
            cin>>v[i];   
        }
        for(long long i=0;i<n;i++){
            if(v[i]<=q){
                count++;
            }
            else if(i!=(n-1)){   
                c.push_back(count);
                count=0;
            }
        }
        c.push_back(count);
        count=0;
        long long sum=0;
        for(long long i=0;i<c.size();i++){
            if(c[i]>k){
                long long x=c[i]-k+1;
                sum=sum+((x*(x+1)))/2;
            }
            else if(c[i]==k){
                sum+=1;
            }
        }
        cout<<sum<<endl;
    }
}
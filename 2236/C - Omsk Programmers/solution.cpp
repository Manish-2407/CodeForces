#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,x;
        cin>>a>>b>>x;
 
        vector<long long> A,B;
 
        long long copy_a=a;
        while(true){
            A.push_back(copy_a);
            if(copy_a==0) break;
            copy_a=copy_a/x;
        }
 
        long long copy_b=b;
        while(true){
            B.push_back(copy_b);
            if(copy_b==0) break;
            copy_b=copy_b/x;
        }
 
        long long ops=2e18;
        for(long long i=0;i<A.size();i++){
            for(long long j=0;j<B.size();j++){
                long long cost=i+j+abs(A[i]-B[j]);
                if(cost<ops){
                    ops=cost;
                }
            }
        }
 
        cout<<ops<<endl;
    }
}
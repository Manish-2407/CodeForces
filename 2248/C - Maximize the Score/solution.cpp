#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> xyz(2*n+1,0);
        vector<long long> abc(2*n+1,0);
        vector<long long> plep(n+1,0);
        for(long long i=1;i<=2*n;i++) cin>>abc[i];
        for(long long i=1;i<=2*n;i++){
            xyz[i]=xyz[i-1]+1;
            long long madar=abc[i];
            if(plep[madar]>0){
                long long j=plep[madar];
                long long sump=i-j+1;
                xyz[i]=max(xyz[i],xyz[j-1]+sump*sump);
            }
            else{
                plep[madar]=i;
            }
        }
        cout<<xyz[2*n];
        cout<<"
";
    }
}
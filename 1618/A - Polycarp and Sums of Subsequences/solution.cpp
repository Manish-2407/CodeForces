#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long ar[7];
        long long sum=0;
        for(long long i=0;i<7;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        cout<<ar[0]<<" "<<ar[1]<<" "<<((sum/4)-ar[0]-ar[1])<<endl;
    }
}
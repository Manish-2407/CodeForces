#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=2;i<32;i++){
            long long d=(1<<i)-1;
            if(n%d==0){
                cout<<n/d<<endl;
                break;
            }
        }
    }
}
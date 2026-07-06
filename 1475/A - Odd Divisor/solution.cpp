#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(log2(n)==int(log2(n))){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
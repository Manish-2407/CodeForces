#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1) cout<<1<<endl;
        else if(n==2) cout<<-1<<endl;
        else if(n==3){
            cout<<1<<" "<<2<<" "<<3<<"
";
        }
        else{
            cout<<1<<" "<<2<<" "<<3;
            long long c=6;
            for(long long i=4;i<=n;i++){
                cout<<" "<<c;
                c*=2;
            }
            cout<<endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==2){
            if(n%2==0){
                cout<<2<<endl;
                cout<<n-1<<" "<<1<<endl;
            }
            else{
                cout<<1<<endl;
                cout<<n<<endl;
            }
        }
        else if(k%2==0){
            if(n%k==0){
                cout<<2<<endl;
                cout<<n-1<<" "<<1<<endl;
            }
            else{
                cout<<1<<endl;
                cout<<n<<endl;
            }
        }
        else{
            if(n%k==0){
                cout<<2<<endl;
                cout<<n-2<<" "<<2<<endl;
            }
            else{
                cout<<1<<endl;
                cout<<n<<endl;
            }
        }
    }
}
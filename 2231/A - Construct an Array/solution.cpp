#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            if(i==n){
                cout<<((2*i)-1)<<"";
            }
            else{
                cout<<((2*i)-1)<<" ";
            }
        }
        cout<<endl;
    }
}
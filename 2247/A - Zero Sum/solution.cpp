#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int pro=1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pro*=x;
        }
        if(n%2==1){
            cout<<"NO
";
        }
        else{
            int tar=((n/2)%2==0 ? 1:-1);
            if(tar==pro){
                cout<<"YES
";
            }
            else{
                cout<<"NO
";
            }
        }
 
    }
}
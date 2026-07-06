#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int c2=0,c3=0;
        for(int i=0;i<n;i++) {
            cin>>ar[i];
            if(ar[i]>=3){
                c3++;
            }
            else if(ar[i]==2){
                c2++;
            }
        }
        if(c3>0 || c2>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
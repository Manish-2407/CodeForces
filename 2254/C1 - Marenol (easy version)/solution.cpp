#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
 
        if(n<3){
            if(a==b) cout<<"YES
";
            else cout<<"NO
";
            continue;
        }
        int ao1=0,ae1=0,bo1=0,be1=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]=='1') ae1++;
                if(b[i]=='1') be1++;
            }
            else{
                if(a[i]=='1') ao1++;
                if(b[i]=='1') bo1++;
            }
        }
        if(ao1==bo1 && ae1==be1){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
    }
}
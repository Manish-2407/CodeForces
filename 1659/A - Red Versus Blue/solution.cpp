#include <bits/stdc++.h>
using namespace std;
 
void prin(string s,int n){
    for(int i=0;i<n;i++){
        cout<<s;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int c=(a%(b+1));
        int d=a/(b+1);
        while(b--){
            if(c>0){
                prin("R",d+1);
                c--;
            }
            else{
                prin("R",d);
            }
            cout<<'B';
        }
        prin("R",d);
        cout<<endl;
    }
}
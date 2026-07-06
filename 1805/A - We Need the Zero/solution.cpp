#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,x=0;
        for(int i=0;i<n;i++){
            cin>>a;
            x=x^a;
        }
 
        if(n%2!=0){
            cout<<x<<"
";
        }
        else{
            if(x==0){
                cout<<0<<"
";
            }
            else{
                cout<<-1<<"
";
            }
        }
    }
}
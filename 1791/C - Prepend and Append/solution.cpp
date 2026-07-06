#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2==0){
            int ans=n;
            for(int i=0;i<n/2;i++){
                if(s[i]=='0' && s[n-i-1]=='1'){
                    ans-=2;
                }
                else if(s[i]=='1' && s[n-i-1]=='0'){
                    ans-=2;
                }
                else{
                    break;
                }
            }
            cout<<ans<<endl;
        }
        else{
            int ans=n;
            for(int i=0;i<n/2;i++){
                if(s[i]=='0' && s[n-i-1]=='1'){
                    ans-=2;
                }
                else if(s[i]=='1' && s[n-i-1]=='0'){
                    ans-=2;
                }
                else{
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<10){
            cout<<n<<endl;
        }
        else{
            int a=n;
        int c=0;
        while(a!=0){
            a=a/10;
            c++;
        }
        int ans=9*(c-1);
 
        for(int i=pow(10,c-1);i<=n;i+=pow(10,c-1)){
            ans++;
        }
        cout<<ans<<endl;
        }
    }
}
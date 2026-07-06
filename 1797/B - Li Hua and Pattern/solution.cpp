#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        int ar[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ar[i][j];
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ar[i][j]!=ar[n-i-1][n-j-1]){
                    c++;
                }
            }
        }
        c/=2;
        if(c<=k){
            if(n%2==1){
                cout<<"YES"<<endl;
            }
            else {
                if ((k - c) % 2 == 0){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        int a;
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }
        for(int i=0;i<m;i++){
            int a[n];
            for(int j=0;j<n;j++){
                a[j]=ar[j][i];
            }
            sort(a,a+n);
            for(int j=0;j<n;j++){
                sum += ((long long)a[j] * (j - (n - 1 - j)));
            }
 
        }
        cout<<sum<<endl;
    }
}
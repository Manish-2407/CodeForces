#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int sum=0;
        for (int i=0;i<n-1;i++){
            cin>>ar[i];
        }
        ar[n-1]=0;
        for(int i=0;i<n;i++){
            sum+=ar[i];
        }
        cout<<-(sum)<<endl;
    }
}
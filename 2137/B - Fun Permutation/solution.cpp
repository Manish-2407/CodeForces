#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            x[i]=(n+1)-v[i];
        }
        for(int i=0;i<n;i++){
            cout<<x[i]<<(i==(n-1) ? "":" ");
        }
        cout<<endl;
    }
}
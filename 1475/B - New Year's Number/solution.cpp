#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int q=n/2020;
        int r=n%2020;
        cout<<(r<=q ? "YES":"NO")<<endl;
    }
}
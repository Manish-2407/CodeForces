#include <bits/stdc++.h>
using namespace std;
 
int f(int n){
    return n%2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(f(b)==f(c))<<" "<<(f(a)==f(c))<<" "<<(f(a)==f(b))<<endl;
    }
}
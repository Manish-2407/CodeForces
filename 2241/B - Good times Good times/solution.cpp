#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        while(n>0){
            c++;
            n=n/10;
        }
        long long x = 1;
        for(int i = 0; i < c; i++) {
            x *= 10;
        }
        x += 1;
        cout<<x<<endl;
    }
}
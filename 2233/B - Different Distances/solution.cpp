#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<n+1;i++) cout<<i<<" ";
 
        vector<int> b2(n);
        for(int i=0;i<n;i++){
            b2[i]=n-i;
        }
 
        if (n % 2 != 0) {
        int m = (n + 1) / 2;
        int i1 = -1, i2 = -1;
        for (int i = 0; i < n; i++) {
            if (b2[i] == m) i1 = i;
            if (b2[i] == m + 1) i2 = i;
        }
        swap(b2[i1], b2[i2]);
        }
 
        for(int i=0;i<n;i++) cout<<b2[i]<<" ";
 
        for(int i=1;i<n+1;i++) cout<<i<<" ";
 
        for(int i=1;i<n;i++) cout<<i<<" ";
 
        cout<<n<<endl;
    }
}
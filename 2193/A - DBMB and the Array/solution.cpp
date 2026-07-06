#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,x,m=0;
        cin >> n >> s >> x;
        vector<int> a(n);
        for(int i=0;i<n;i++) {cin >> a[i]; m+=a[i];}
        if(s<m) cout<<"NO"<<endl;
        else if(s==m) cout<<"YES"<<endl;
        else{
            if((s-m)%x==0){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}
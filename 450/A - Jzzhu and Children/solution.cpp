#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i]=(x+m-1)/m;
    }
    int ma=0,ans=n-1;
    for(int i=0;i<n;i++){
        if(v[i]>=ma){
            ma=v[i];
            ans=i;
        }
    }
    cout<<ans+1<<endl;
}
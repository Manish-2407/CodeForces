#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int t=v[k-1];
    int c=0;
    for(int i=0;i<n;i++){
        if(v[i]>=t && v[i]>0){
            c++;
        }
        else break;
    }
    cout<<c<<endl;
}
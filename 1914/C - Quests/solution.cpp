#include <bits/stdc++.h>
using namespace std;
 
int sum(vector<int> v,int x){
    int s=0;
    for(int i=0;i<x;i++){
        if(i<=x){
            s+=v[i];
        }
        else{
            break;
        }
    }
    return s;
}
 
int ma(vector<int> v,int x){
    int m=0;
    for(int i=0;i<x;i++){
        m=max(m,v[i]);
    }
    return m;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
 
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int m=0;
        int sum=0;
        int c_max=b[0];
        for(int p=0;p<min(n,k);p++){
            sum+=a[p];
            if(b[p]>=c_max) c_max=b[p];
            m=max(m,(sum+(k-p-1)*c_max));
        }
        cout<<m<<endl;
    }
}
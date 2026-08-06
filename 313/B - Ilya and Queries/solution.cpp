#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int a[n+1]={0};
    for(int i=1;i<n;i++){
        a[i+1]=a[i];
        if(s[i]==s[i-1]){
            a[i+1]++;
        }
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        cout<<a[r]-a[l]<<endl;
    }
}
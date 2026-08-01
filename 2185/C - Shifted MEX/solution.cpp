#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        vector<int> k;
        k.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1]){
                continue;
            }
            else{
                k.push_back(v[i]);
            }
        }
        int x=k[0];
        int m=1;
        int c=1;
        for(int i=1;i<k.size();i++){
            if(k[i]==x+1){
                c++;
                x=k[i];
            }
            else{
                m=max(m,c);
                x=k[i];
                c=1;
            }
        }
        m=max(m,c);
        cout<<m<<endl;
    }
}
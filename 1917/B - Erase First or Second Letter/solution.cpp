#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        vector<int> ar(26,0);
        for(int i=0;i<n;i++){
            if(ar[int(s[i])-97]==0){
                c+=(n-i);
                ar[int(s[i])-97]++;
            }
        }
        cout<<c<<endl;
    }
}
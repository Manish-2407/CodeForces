#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> v(26);
        for(char c:s){
            v[c-'a']++;
        }
        int c=0;
        for(int i:v){
            if(i%2==1) c++;
        }
        cout<<(k>=(c-1) ? "YES":"NO")<<endl;
    }
}
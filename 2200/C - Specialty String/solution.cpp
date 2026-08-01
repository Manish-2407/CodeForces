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
        vector<char> st;
        for(char ch:s){
            if(!(st.empty()) && (st.back()==ch)){
                st.pop_back();
            }
            else{
                st.push_back(ch);
            }
        }
        cout<<(st.empty() ? "YES":"NO")<<endl;
    }
}
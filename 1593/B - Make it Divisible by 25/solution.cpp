#include <bits/stdc++.h>
using namespace std;
 
int count(string x,string tar){
    int c=0;
    int j=1;
    int n=x.size();
    for(int i=n-1;i>=0;i--){
        if(x[i]==tar[j]){
            j--;
 
        }
        else{
            c++;
        }
        if(j==-1){
            return c;
        }
    }
    return n;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m=s.size();
        vector<string> ss={"00","25","50","75"};
        for (int i=0;i<4;i++){
            m=min(m,count(s,ss[i]));
        }
        cout<<m<<endl;
    }
}
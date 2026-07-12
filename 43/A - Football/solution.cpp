#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string a[n];
    int c1=0,c2=0;
    for(int i=0;i<n;i++) cin>>a[i];
    string m;
    for(string s:a){
        if(s==a[0]) c1++;
        else{
            m=s;
            c2++;
        }
    }
    if(c2>c1){
        cout<<m<<endl;
    }
    else{
        cout<<a[0]<<endl;
    }
}
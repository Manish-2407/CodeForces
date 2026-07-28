#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int u=0;
    int l=0;
    for(char ch:s){
        if(ch>='A' && ch<='Z') u++;
        else l++;
    }
    if(u>l){
        for(char &c:s){
            c=toupper(c);
        }
    }
    else{
        for(char &c:s){
            c=tolower(c);
        }
    }
    cout<<s<<endl;
}
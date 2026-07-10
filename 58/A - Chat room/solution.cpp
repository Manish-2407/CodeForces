#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    string tar="hello";
    int j=0;
    for(char x:s){
        if(x==tar[j]) j++;
        if(j==5){
            cout<<"YES
";
            return 0;
        }
    }
    cout<<"NO
";
}
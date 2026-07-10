#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    bool b=false;
    for(int x:v){
        if(n%x==0){
            b=true;
            break;
        }
    }
    cout<<(b ? "YES":"NO")<<endl;
}
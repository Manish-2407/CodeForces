#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    int d=0,r=0,sum=a;
    while(a>=b){
        d=a/b;
        r=a%b;
        sum+=d;
        a=d+r;
    }
    cout<<(sum)<<endl;
}
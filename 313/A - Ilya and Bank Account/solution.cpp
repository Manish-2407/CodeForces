#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int nc=n;
    int r=n%10;
    int a=n/10;
    int b=n/100;
    b=b*10+r;
    int ans=max(a,b);
    cout<<(nc<0 ? ans:nc)<<endl;
}
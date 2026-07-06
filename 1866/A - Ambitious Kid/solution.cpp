#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,a;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>a;
        ar[i]=abs(a);
    }
    sort(ar,ar+n);
    cout<<ar[0]<<endl;
}
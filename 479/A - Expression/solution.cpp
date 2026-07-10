#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a[3];
    cin>>a[0];
    cin>>a[1];
    cin>>a[2];
    cout<<max((a[0]+a[1]+a[2]),max((a[0]*a[1]*a[2]),max(((a[0]+a[1])*a[2]),max((a[0]+(a[1]*a[2])),max(((a[0]*a[1])+a[2]),(a[0]*(a[1]+a[2])))))))<<endl;
}
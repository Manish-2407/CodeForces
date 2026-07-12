#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,sum=0,m=0;
    for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>t){
            sum-=a[l];
            l++;
        }
        m=max(m,r-l+1);
    }
    cout<<m<<"
";  
}
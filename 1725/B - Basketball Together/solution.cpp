#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,d;
    cin>>n>>d;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);
    int y=0,c=0;
    int av=n;
    for(int i=n-1;i>-1;i--){
        int x=(d/ar[i])+1;
        if(av>=x){
            y++;
            av-=x;
        }
        else{
            break;
        }
    }
    cout<<y<<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
        vector<int> c(n,0);
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                c[i]=1;
            }
        }
        int x,y;
        for(int i=0;i<n;i++){
            if(c[i]==1){
                x=i;
                break;
            }
        }
        for(int i=n-1;i>-1;i--){
            if(c[i]==1){
                y=i;
                break;
            }
        }
        while(x>0 && b[x]>=b[x-1]){
            x--;
        }
        while(y<n-1 && b[y]<=b[y+1]){
            y++;
        }
        cout<<++x<<" "<<++y<<endl;
    }
}
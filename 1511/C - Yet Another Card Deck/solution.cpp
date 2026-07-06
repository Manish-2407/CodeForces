#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,q;
    cin>>n>>q;
    int a;
    vector<int> pos(51,0);
    vector<int> v(q);
    for(int i=1;i<=n;i++){
        cin>>a;
        if(pos[a]==0){
            pos[a]=i;
        }
    }
 
    for(int i=0;i<q;i++){
        cin>>a;
        int x=pos[a];
        cout<<x<<(i == q - 1 ? "" : " ");
        for(int j=1;j<=50;j++){
            if(pos[j]>0 && pos[j]<x){
                pos[j]++;
            }
        }
        pos[a]=1;
    }
}
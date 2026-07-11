#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int c=0;
    vector<int> v;
    for(int i=0;pow(2,i)<=1e9;i++){
        int a=pow(2,i);
        v.push_back(a);
    }
    while(n>0){
        auto it=upper_bound(v.begin(),v.end(),n);
        int index=it-v.begin();
        n-=v[index-1];
        c++;
    }
    cout<<c<<endl;
}
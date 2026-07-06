#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c,a;
        cin>>n>>c;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>a;
            v[i]=a+i+1;
        }
        sort(v.begin(),v.end());
 
        int sum=0,i,count=0;
        for(i=0;i<n;i++){
            if(sum+v[i]>c){
                break;
            }
            else{
                sum+=v[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
}
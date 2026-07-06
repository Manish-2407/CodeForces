#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int l=0;
        int r=n-1;
        int suml=v[l],sumr=v[r],ans=0;
        
        while(l<r){
            if(suml==sumr){
                ans=(l+1)+(n-r);
                l++;
                suml+=v[l];
            }
            else if(suml<sumr){
                l++;
                suml+=v[l];
            }
            else{
                r--;
                sumr+=v[r];
            }
        }
        cout<<ans<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int br[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            cin>>br[i];
        }
        int c=1;
        vector<int> ma(2*n+1,0);
        vector<int> mb(2*n+1,0);
        ma[ar[0]]=1;
        mb[br[0]]=1;
        for(int i=1;i<n;i++){
            if(ar[i]==ar[i-1]){
                c++;
            }
            else{
                c=1;
            }
            ma[ar[i]]=max(ma[ar[i]],c);
        }
        c=1;
        for(int i=1;i<n;i++){
            if(br[i]==br[i-1]){
                c++;
            }
            else{
                c=1;
            }
            mb[br[i]]=max(mb[br[i]],c);
        }
        int ans=0;
        for(int i=0;i<=2*n;i++){
            ans=max(ans,ma[i]+mb[i]);
        }
        cout<<ans<<endl;
    }
}
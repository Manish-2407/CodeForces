#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        int c4=0,c8=0;
        for(char c:s){
            if(c=='4') c4++;
            else c8++;
        }
        int ax=abs(x);
        int ay=abs(y);
        if(ax<=c4+c8 && ay<=c4+c8 && ax+ay<=c4+2*c8) cout<<"YES
";
        else cout<<"NO
";
    }
}
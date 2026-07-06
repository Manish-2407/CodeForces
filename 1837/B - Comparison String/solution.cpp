#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int min1=0,c=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                c++;
            }
            else{
                if(c>min1){
                    min1=c;
                    
                }
                c=1;
            }
        }
        if(c>min1){
            min1=c;
            c=1;
        }
        cout<<min1+1<<endl;
    }
}
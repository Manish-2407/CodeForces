#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            if(c%2==0){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
        else{
            int l=max(a,b)-(min(a,b)+c);
            if(l%2==0){
                if(max(a,b)==a){
                    cout<<"First"<<endl;
                }
                else{
                    cout<<"Second"<<endl;
                }
            }
            else{
                if(max(a,b)==a){
                    cout<<"First"<<endl;
                }
                else{
                    cout<<"Second"<<endl;
                }
            }
        }
    }
}
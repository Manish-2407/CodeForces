#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b){
            cout<<-1<<endl;
        }
        else{
            int xnew=a+(d-b);
            if(xnew>=c){
                cout<<+(d-b)+xnew-c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}
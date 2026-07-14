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
        int moves=0;
        int openc=0;
        for(char c:s){
            if(c=='('){
                openc++;
            }
            else{
                if(openc>0){
                    openc--;
                }
                else{
                    moves++;
                }
            }
        }
        cout<<moves<<endl;
    }
}
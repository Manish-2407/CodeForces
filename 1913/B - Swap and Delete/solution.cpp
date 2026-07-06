#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c0=0,c1=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='0'){
                c0++;
            }
            else{
                c1++;
            }
        }
        int x=0;
        if(c0==c1){
            cout<<0<<endl;
        }
        else{
            for(int i=0;i<s.size();i++){
                if(s[i]=='0'){
                    if(c1>0){
                        c1--;
                        x++;
                    }
                    else{
                        break;
                    }
                }
                else{
                    if(c0>0){
                        c0--;
                        x++;
                    }
                    else{
                        break;
                    }
                }
            }
            cout<<s.size()-x<<endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int abc=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                abc++;
            }
        }
        if(abc==0){
            int a=((n+2)/3);
            cout<<a<<endl;
        }
        else{
            int add=0;
            int s1=s.find('1');
            int e1=s.rfind('1');
            add+=(s1+1)/3;
            int a=n-1-e1;
            add+=(a+1)/3;
            int current_zeros = 0;
            for (int i = s1; i <= e1; i++) {
                if (s[i] == '0') {
                    current_zeros++;
                } 
                
                else {
                    add += current_zeros / 3;
                    current_zeros = 0;
                }
            }
            cout<<abc+add<<endl;
        }
    }
}
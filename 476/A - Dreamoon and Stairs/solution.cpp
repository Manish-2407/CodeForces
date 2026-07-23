#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    if(n<k){
        cout<<-1<<endl;
    }
    else{
        int m=(n+1)/2;
        while(m%k!=0){
            m++;
        }
        cout<<m<<endl;
    }
}
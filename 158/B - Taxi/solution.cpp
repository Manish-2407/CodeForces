#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int x;
    int c1=0,c2=0,c3=0,c4=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1) c1++;
        else if(x==2) c2++;
        else if(x==3) c3++;
        else c4++;
    }
    x=c4;
 
    x+=c3;
    if(c1>c3){
        c1-=c3;
    }
    else{
        c1=0;
    }
 
    x+=c2/2;
 
    if(c2%2!=0){
        x+=1;
        c1=max(0,c1-2);
    }
 
    if(c1>0){
        x+=(c1+3)/4;
    }
    cout<<x<<endl;
}
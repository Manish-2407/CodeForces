#include <bits/stdc++.h>
using namespace std;
 
long long maximum(long long x){
    if(x%4==0){
        return (x/4);
    }
    else if(x%4==2){
        if(x>=6){
            return (((x-6)/4)+1);
        }
    }
}
long long minimum(long long y){
    if(y%6==0){
        return (y/6);
    }
    else if(y%6==4){
        if(y>=4){
            return (((y-4)/6)+1);
        }
    }
    else if(y%6==2){
        if(y>=8){
            return (((y-8)/6)+2);
        }
    }
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2!=0 || n<4){
            cout<<-1<<endl;
        }
        else{
            long long e=maximum(n);
            long long f=minimum(n);
            cout<<f<<" "<<e<<endl;
        }
    }
}
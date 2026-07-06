#include <bits/stdc++.h>
using namespace std;
 
bool sumo(long long x){
    long long c=x;
    while(x>0){
        int a=x%10;
        if(a!=0){
            if(c%a!=0){
                return false;
            }
        }
        x/=10;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
 
        while(true){
            if(sumo(n)){
                cout<<n<<endl;
                break;
            }
            n++;
        }
    }
}
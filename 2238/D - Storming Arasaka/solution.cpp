#include <bits/stdc++.h>
using namespace std;
 
const int N=1000005;
int spf[N];
 
void precom(){
    for(int i=0;i<N;i++){
        spf[i]=i;
    }
    for (int i = 2; i * i < N; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < N; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}
 
int main(){
    precom();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        int m=0;
        int om=0;
        int temp=n;
        while(temp>1){
            int p=spf[temp];
            m++;
            while(temp%p==0){
                om++;
                temp/=p;
            }
        }
        cout<<m+om-1<<endl;
    }
}
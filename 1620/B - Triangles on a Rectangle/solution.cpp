#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long w,h;
        cin>>w>>h;
        long long n;
        long long m=0;
 
        cin>>n;
        long long bottom[n];
        for(long long i=0;i<n;i++) cin>>bottom[i];
        sort(bottom,bottom+n);
        m=max(m,(h*(bottom[n-1]-bottom[0])));
 
        cin>>n;
        long long top[n];
        for(long long i=0;i<n;i++) cin>>top[i];
        sort(top,top+n);
        m=max(m,(h*(top[n-1]-top[0])));
 
        cin>>n;
        long long left[n];
        for(long long i=0;i<n;i++) cin>>left[i];
        sort(left,left+n);
        m=max(m,(w*(left[n-1]-left[0])));
 
        cin>>n;
        long long right[n];
        for(long long i=0;i<n;i++) cin>>right[i];
        sort(right,right+n);
        m=max(m,(w*(right[n-1]-right[0])));
 
        cout<<m<<endl;
    }
}
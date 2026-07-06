#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> h(n);
        for(int i=0;i<n;i++) cin>>h[i];
 
        vector<long long> ans(n);
        vector<long long> pre(n);
 
        for (int target = 0; target < n; target++) {
        long long c_max_cw = 0;
        for (int step = 1; step < n; step++) {
            int v = (target + step) % n;
            int b = (v - 1 + n) % n;
            if (h[b] > c_max_cw) {
                c_max_cw = h[b];
            }
            pre[v] = c_max_cw;
        }
        
        long long c_max_ccw = 0;
        long long total = 0;
        for (int step = 1; step < n; step++) {
            int v = (target - step + n) % n;
            int b = v; 
            if (h[b] > c_max_ccw) {
                c_max_ccw = h[b];
            }
            total += min(pre[v], c_max_ccw);
        }
        ans[target] = total;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl; 
    }
}
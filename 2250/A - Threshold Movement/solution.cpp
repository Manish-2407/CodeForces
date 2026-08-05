#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int mo = 2e9; 
        int me = -2e9;
        for (int i = 1; i <= n; i++) {
            int w;
            cin >> w;
            if (i % 2 != 0) mo = min(mo, w);
            else me = max(me, w);
        }
        if (n % 2 != 0) cout << "NO
";
        else if (mo - me >= 2)cout << "YES
"; 
        else cout << "NO
";
    }
}
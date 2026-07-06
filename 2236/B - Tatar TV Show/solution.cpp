#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> count(k, 0);
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            count[i % k]++;
        }
    }
    bool b = true;
    for (int i = 0; i < k; ++i) {
        if (count[i] % 2 != 0) {
            b = false;
            break;
        }
    }
    if (b) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
    }
}
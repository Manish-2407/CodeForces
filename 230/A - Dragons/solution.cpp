#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,s;
    cin>>s>>n;
    vector<pair<int, int>> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (s > v[i].first) {
            s += v[i].second;
        } else {
            cout << "NO
";
            return 0;
        }
    }
 
    cout << "YES
";
}
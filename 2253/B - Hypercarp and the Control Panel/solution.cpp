#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<pair<int, int>> p;
        for (int i = 0,x; i < n; i++){
            cin >> x;
            if (p.empty() || p.back().first != x) p.push_back({x, 1});
            else p.back().second++;
        }
        int ans = 0;
        for (int i = 0; i < p.size(); i++){
            if (p[i].second > 1){
                if (i + 1 < p.size() && p[i + 1].second > 1){
                    ans = 2;
                    break;
                }
                if (i > 0 && (i == 1 || p[i - 2].first != p[i].first)){
                    ans = max(ans, 1);
                }
                if (i + 1 < p.size() && (i + 2 == p.size() || p[i + 2].first != p[i].first)){
                    ans = max(ans, 1);
                }
            }
        }
        cout << p.size()+ans <<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        long long sum_a = 0, sum_b = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum_a += a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            sum_b += b[i];
        }
        long long dif = sum_a - sum_b;
        bool pos = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] < b[i]) {
                pos = false;
                break;
            }
        }
        if (pos) {
            cout << dif << "
";
            continue;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool poss = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] < b[i]) {
                poss = false;
                break;
            }
        }
        if (poss) {
            cout << dif + c << "
";
        } else {
            cout << -1 << "
";
        }
    }
}
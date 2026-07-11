#include <bits/stdc++.h>
using namespace std;
 
using namespace std;
 
const int M = 1000000;
vector<bool> v(M + 1, true);
void sieve() {
    v[0] = v[1] = false;
    for (long long p = 2; p * p <= M; p++) {
        if (v[p]) {
            for (long long i = p * p; i <= M; i += p) {
                v[i] = false;
            }
        }
    }
}
 
int main() {
    sieve();
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        long long r = round(sqrt(x));
        if (r * r == x && v[r]) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    
    return 0;
}
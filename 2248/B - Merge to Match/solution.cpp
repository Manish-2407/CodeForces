#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
 
        for (int i = 0; i < n; ++i) cin>>a[i];
        for (int i = 0; i < m; ++i) cin>>b[i];
        if (n < 2 * m) cout << "NO
";
        else{
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            bool p = true;
            for (int i = 0; i < m; ++i){
                if (a[i] >= b[i] || b[i] >= a[n - m + i]){
                    p=false;
                    break;
                }
            }
            cout<<(p ? "YES":"NO")<<endl;
        }
    }
}
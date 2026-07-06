#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        vector<pair<int, int>> q(n);
        for (int i = 0; i < n; ++i)
        {
            long long h;
            cin >> h;
            h %= k;
            if (h == 0)
            {
                h = k;
            }
            q[i] = {-h, i + 1};
        }
        sort(q.begin(), q.end());
        for (int i = 0; i < n; ++i)
        {
            cout << q[i].second << (i == n - 1 ? "" : " ");
        }
        cout << "
";
    }
}
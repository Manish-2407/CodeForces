#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), v(n + 1);
 
        int m = 0, c = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] > m)
            {
                m = a[i];
                c = i;
            }
            else if (a[i] == m)
            {
                c = i;
            }
            v[i] = c;
        }
 
        int ans = 0;
        int end = n;
        while (end > 0)
        {
            ans++;
            end = v[end] - 1;
        }
 
        cout << ans << "
";
    }
}
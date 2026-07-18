#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        if (k > m)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
            for (int i = 1; i <= n; i++)
            {
                if (i % k == 0)
                {
                    cout << m - k + 1 << (i == n ? "" : " ");
                }
                else
                {
                    cout << 1 << (i == n ? "" : " ");
                }
            }
            cout << endl;
        }
    }
}
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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int s1 = 0;
        int s0 = 0;
        int z1 = 0;
        int z0 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 1 && b[i] == 0)
            {
                s1++;
            }
            else if (a[i] == 0 && b[i] == 1)
            {
                s0++;
            }
            else if (a[i] == 1 && b[i] == 1)
            {
                z1++;
            }
            else
            {
                z0++;
            }
        }
        if (s1 == 0 && s0 == 0)
        {
            cout << 0 << "
";
        }
        else if (s1 % 2 == 1)
        {
            cout << 1 << "
";
        }
        else if (s1 > 0)
        {
            cout << 2 << "
";
        }
        else
        {
            if (z1 == 0 || z0 == 0)
            {
                cout << -1 << "
";
            }
            else
            {
                cout << 2 << "
";
            }
        }
    }
}
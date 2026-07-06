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
 
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        long long O = 0;
        long long E = 0;
        bool p = true;
 
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                long long r = b[i] - a[i];
                if (E < -r)
                {
                    p = false;
                    break;
                }
                O = E + r;
            }
            else
            {
                long long r = a[i] - b[i];
                if (O < r)
                {
                    p = false;
                    break;
                }
                E = O - r;
            }
        }
        if (p)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
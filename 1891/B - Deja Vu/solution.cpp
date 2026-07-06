#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        long long a[n];
        long long x[q];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        for (long long i = 0; i < q; i++)
            cin >> x[i];
        int minx = 31;
        for (long long i = 0; i < q; i++)
        {
            if (x[i] < minx)
            {
                long long k = pow(2, x[i]);
                for (long long j = 0; j < n; j++)
                {
                    if (a[j] % k == 0)
                    {
                        a[j] += (k / 2);
                    }
                }
                minx = x[i];
            }
        }
        for (long long i = 0; i < n - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[n - 1] << endl;
    }
}
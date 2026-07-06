#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(2 * n + 1, 0);
        long long x;
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            v[x] = i + 1;
        }
        long long c = 0;
        for (long long i = 1; i < 2LL * n + 1; i++)
        {
            if (v[i] == 0)
                continue;
            for (long long j = i + 1; i * j < 2LL * n + 1; j++)
            {
                if (v[j] == 0)
                    continue;
                if (v[i] + v[j] == i * j)
                {
                    c++;
                }
            }
        }
        cout << c << endl;
    }
}
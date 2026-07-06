#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, c, k;
        cin >> n >> c >> k;
        vector<int> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        for (long long i = 0; i < n; i++)
        {
            if (v[i] > c)
            {
                break;
            }
            long long m = c - v[i];
            long long f = min(k, m);
 
            k -= f;
            c += v[i] + f;
        }
        cout << c << endl;
    }
}
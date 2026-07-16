#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, c;
        cin >> n >> c;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];
 
        reverse(v.begin(), v.end());
        sort(v.begin(), v.end(), greater<long long>());
        long long msum = 0;
        long long k = (n + 1) / 2;
        for (long long i = 0; i < k; i++)
        {
            msum += v[i];
        }
        long long ms = msum - (k * c);
 
        for (long long i = k + 1; i <= n; i++)
        {
            msum += v[i - 1];
            long long s = msum - (i * c);
            ms = max(ms, s);
        }
        cout << ms << endl;
    }
}
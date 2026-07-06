#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
 
        long long max = 0;
        long long v = 1;
        while (n >= v)
        {
            long long t = min(k, n / v);
            max += t;
            n -= t * v;
            v *= 2;
        }
        cout << max << "
";
    }
}
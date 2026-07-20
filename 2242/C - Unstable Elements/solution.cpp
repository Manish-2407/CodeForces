#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> fre;
        int f = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                f++;
            }
            else
            {
                fre.push_back(f);
                f = 1;
            }
        }
        fre.push_back(f);
        sort(fre.begin(), fre.end());
        int m = fre.size();
        long long o = 0;
        for (int x : fre)
        {
            o += x;
        }
        long long M = m;
        int ans = 0;
 
        for (int i = 0; i < m; i++)
        {
            if (i == 0 || fre[i] != fre[i - 1])
            {
                int v = fre[i];
                long long rem = k - o;
 
                if (rem % M == 0)
                {
                    long long X = rem / M;
                    if (X >= 1 - v)
                    {
                        ans++;
                    }
                }
            }
            o -= fre[i];
            M--;
        }
        cout << ans << "
";
    }
}
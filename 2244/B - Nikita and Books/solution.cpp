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
 
        long long sum = 0;
        bool b = true;
 
        for (long long i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            sum += a;
            long long rsum = (i + 1) * (i + 2) / 2;
            if (sum < rsum)
            {
                b = false;
            }
        }
 
        if (b)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
    }
}
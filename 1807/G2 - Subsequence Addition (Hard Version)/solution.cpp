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
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];
 
        sort(v.begin(),v.end());
        if (v[0] != 1)
        {
            cout << "NO
";
            continue;
        }
        
        bool b = true;
        long long sum = v[0];
        for (long long i = 1; i < n; i++)
        {
            if (v[i] > sum)
            {
                b = false;
                break;
            }
            else
            {
                sum += v[i];
            }
        }
        cout << (b ? "YES" : "NO") << endl;
    }
}
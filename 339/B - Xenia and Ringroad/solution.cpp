#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> v(m);
    for (long long i = 0; i < m; i++)
        cin >> v[i];
    long long c = 0;
    for (long long i = 1; i < m; i++)
    {
        if (v[i - 1] > v[i])
            c++;
    }
    cout << ((c * n) + (v[m - 1] - 1)) << "
";
}
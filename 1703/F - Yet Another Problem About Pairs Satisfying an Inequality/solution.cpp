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
        vector<long long> v(n + 1);
        vector<long long> a;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (v[i] < i)
            {
                a.push_back(i);
            }
        }
        long long c = 0;
        for (int i = 0; i < a.size(); i++)
        {
            long long x=lower_bound(a.begin(),a.end(),v[a[i]])-a.begin();
            c+=x;
        }
        cout << c << endl;
    }
}
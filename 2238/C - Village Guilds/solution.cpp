#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
 
        vector<int> v(n + 1, 0);
        for (int i = 2; i <= n; ++i)
        {
            cin >> v[i];
        }
        vector<int> dep(n + 1, 0);
        for (int i = 2; i <= n; ++i)
        {
            dep[i] = dep[v[i]] + 1;
        }
        vector<int> m1(n + 1, -1);
        vector<int> m2(n + 1, -1);
        for (int i = n; i >= 2; --i)
        {
            int par = v[i];
            int md;
            if((m1[i] == -1)){
                md=dep[i];
            }
            else{
                md=m1[i];
            }
            if (md > m1[par])
            {
                m2[par] = m1[par];
                m1[par] = md;
            }
            else if (md > m2[par])
            {
                m2[par] = md;
            }
        }
        long long ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (m2[i] == -1)
            {
                ans += 1;
            }
            else
            {
                ans += (long long)m2[i] - dep[i] + 1;
            }
        }
        cout << ans << "
";
    }
}
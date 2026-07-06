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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
 
        sort(v.begin(), v.end());
        bool poss = false;
        int count = 1;
        for (int i = 1; i < n; ++i)
        {
            if (v[i] == v[i - 1])
            {
                count++;
            }
            else
            {
                if (count % 2 == 0)
                {
                    poss = true;
                    break;
                }
                count = 1;
            }
        }
        if (count % 2 == 0)
        {
            poss = true;
        }
        if (!poss)
        {
            int p = v[0];
            for (int i = 1; i < n; ++i)
            {
                if (v[i] != p)
                {
                    if (v[i] - p <= k)
                    {
                        poss = true;
                        break;
                    }
                    p = v[i];
                }
            }
        }
        if (poss)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
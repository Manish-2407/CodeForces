#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Fast I/O is highly recommended for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
            
        vector<int> as = a;
        sort(as.begin(), as.end());
        
        bool pos = true;
        for (int i = 0; i < n; i++)
        {
            if (as[i] > b[i])
            {
                pos = false;
                break;
            }
        }
        if (!pos) {
            cout << -1 << "
";
            continue; 
        }
        vector<bool> v(n, false);
        long long l = 0;
        for (int j = 0; j < n; j++)
        {
            int f = -1;
            for (int i = 0; i < n; i++)
            {
                if (!v[i] && a[i] <= b[j])
                {
                    f = i;
                    break;
                }
            }
            int c = 0;
            for (int k = 0; k < f; k++)
            {
                if (!v[k])
                {
                    c++;
                }
            }
            l += c;
            v[f] = true;
        }
        cout << l << "
";
    }
    return 0;
}
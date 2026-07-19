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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int c = 0;
        vector<int> a;
        for (int i = n - 1; i >= 0; i--)
        {
            int l = v[i];
            if (c % 2 == 1)
            {
                l = -l;
            }
            if (l > 0)
            {
                a.push_back(i + 1);
                c++;
            }
        }
        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << (i == (a.size() - 1) ? "" : " ");
        }
        cout << endl;
    }
}
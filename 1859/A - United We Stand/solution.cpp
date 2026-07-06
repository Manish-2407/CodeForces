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
        int ar[n];
        int ce = 0, co = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
 
        vector<int> b;
        vector<int> c;
        sort(ar, ar + n);
        if (ar[0] == ar[n - 1])
        {
            cout << -1 << endl;
        }
        else
        {
            int x = ar[0];
            for (int i = 0; i < n; i++)
            {
                if (ar[i] == ar[0])
                {
                    b.push_back(ar[i]);
                }
                else
                {
                    c.push_back(ar[i]);
                }
            }
            cout << b.size() << " " << c.size() << endl;
            for (int i = 0; i < b.size(); i++)
            {
                if (i == b.size() - 1)
                {
                    cout << b[i] << endl;
                }
                else
                {
                    cout << b[i] << " ";
                }
            }
            for (int i = 0; i < c.size(); i++)
            {
                if (i == c.size() - 1)
                {
                    cout << c[i] << endl;
                }
                else
                {
                    cout << c[i] << " ";
                }
            }
        }
    }
}
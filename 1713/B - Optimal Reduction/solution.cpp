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
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        bool p = true;
        int c = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (p)
            {
                if (ar[i] < ar[i - 1])
                {
                    c++;
                    p = false;
                }
            }
            if (!p)
            {
                if (ar[i] < ar[i + 1])
                {
                    c++;
                    break;
                }
            }
        }
        if (c == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        int a = n % 4;
        if (x % 2 == 0)
        {
            if (a == 0)
            {
                cout << x << endl;
            }
            else if (a == 1)
            {
                cout << x - n << endl;
            }
            else if (a == 2)
            {
                cout << x + 1 << endl;
            }
            else if (a == 3)
            {
                cout << x + n + 1 << endl;
            }
        }
        else
        {
            if (a == 0)
            {
                cout << x << endl;
            }
            else if (a == 1)
            {
                cout << x + n << endl;
            }
            else if (a == 2)
            {
                cout << x - 1 << endl;
            }
            else if (a == 3)
            {
                cout << x - n - 1 << endl;
            }
        }
    }
}
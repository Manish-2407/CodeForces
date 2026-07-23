#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;
        if (b >= 2 * a)
        {
            cout << (a * (x + y)) << endl;
        }
        else
        {
            int c = min(x, y);
            int d = max(x, y) - c;
            cout << (c * b) + (a * d) << endl;
        }
    }
}
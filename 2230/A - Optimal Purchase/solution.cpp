#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;
 
        if ((3 * a) < b)
        {
            cout << a * n << endl;
        }
        else
        {
            long long x = n / 3;
            long long y = n % 3;
            cout << ((x * b) + min(b, (y * a))) << endl;
        }
    }
}
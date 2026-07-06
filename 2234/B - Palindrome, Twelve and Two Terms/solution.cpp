#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 10)
        {
            cout << -1 << "
";
        }
        else
        {
            int r = n % 12;
            long long a = 0;
 
            if (r <= 9)
            {
                a = r;
            }
            else if (r == 11)
            {
                a = 11;
            }
            else if (r == 10)
            {
                a = 22;
            }
 
            long long b = n - a;
            cout << a << " " << b << "
";
        }
    }
}
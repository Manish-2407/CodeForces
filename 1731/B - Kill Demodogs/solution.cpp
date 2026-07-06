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
        long long x = 1000000007;
        long long y = 166666668;
 
        long long a = n % x;
        a = a * ((n + 1) % x) % x;
        a = a * ((4 * (n % x) - 1 + x) % x) % x;
        a = a * y % x;
        a = a * 2022 % x;
        cout << a << endl;
    }
}
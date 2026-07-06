#include <bits/stdc++.h>
using namespace std;
 
int ans(long long x)
{
    if (x % 3 == 0)
    {
        return (x / 3);
    }
    else if (x % 3 == 1)
    {
        return (int(x / 3) + 1);
    }
    else if (x % 3 == 2)
    {
        return (int(x / 3) + 1);
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a > b)
        {
            if (a % b == 0)
            {
                long long x = a / b;
                long long c=0;
                while(x%2==0){
                    x/=2;
                    c++;
                }
                if (x==1)
                {
                    cout << ans(c) << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            if (b % a == 0)
            {
                long long x = b / a;
                long long c=0;
                while(x%2==0){
                    x/=2;
                    c++;
                }
                if (x==1)
                {
                    cout << ans(c) << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}
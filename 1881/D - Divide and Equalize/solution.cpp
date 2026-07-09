#include <bits/stdc++.h>
using namespace std;
void func()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> ar;
    for (int x : v)
    {
        for (int i = 2; i * i <= x; i++)
        {
            while (x % i == 0)
            {
                ar[i]++;
                x /= i;
            }
        }
        if (x > 1)
        {
            ar[x]++;
        }
    }
    for (auto const &pair : ar)
    {
        if (pair.second % n != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        func();
    }
}
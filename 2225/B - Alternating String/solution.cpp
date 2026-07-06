#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c = 0;
        int n = s.length();
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                c++;
            }
        }
        if (c <= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
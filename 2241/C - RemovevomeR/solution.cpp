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
        string s;
        cin >> s;
        int x = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                x++;
            }
        }
 
        int m;
        if (x == 1)
        {
            m = 2;
        }
        else
        {
            m = 1;
        }
        cout << m << "
";
    }
}
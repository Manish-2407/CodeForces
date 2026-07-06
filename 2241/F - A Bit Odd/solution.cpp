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
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                x++;
            }
            if (s[i] == '1')
            {
                break;
            }
        }
        int y = n - 1;
        for (int i = n - 1; i > -1; i--)
        {
            if (s[i] == '1')
            {
                y--;
            }
            if (s[i] == '0')
            {
                break;
            }
        }
        string ans;
        if (x > y)
        {
            ans = "Bob";
        }
        else
        {
            bool b = false;
            int i = x;
            while (i <= y)
            {
                int j = i;
                while (j <= y && s[j] == s[i])
                {
                    j++;
                }
 
                int l = j - i;
                if (l % 2 != 0)
                {
                    b = true;
                    break;
                }
                i = j;
            }
            if (b)
            {
                ans = "Alice";
            }
            else
            {
                ans = "Bob";
            }
        }
        cout<<ans<<endl;
    }
}
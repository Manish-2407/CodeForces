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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int s = 0;
            int l = 0;
 
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                    s++;
                if (a[j] > a[i])
                    l++;
            }
            cout << max(s, l) << (i == n - 1 ? "" : " ");
        }
        cout << "
";
    }
}
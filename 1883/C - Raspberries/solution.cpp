#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        if (k != 4)
        {
            int min = 6;
            bool b = true;
            for (int i = 0; i < n; i++)
            {
                int a = ar[i] / k;
                a++;
                if (ar[i] % k == 0)
                {
                    cout << 0 << endl;
                    b = false;
                    break;
                }
                else if ((k * a) - ar[i] < min)
                {
                    min = (k * a) - ar[i];
                }
            }
            if (b)
            {
                cout << min << endl;
            }
        }
        else
        {
            bool b = true;
            int c = 0, e = 111;
            for (int i = 0; i < n; i++)
            {
 
                if (ar[i] % 4 == 0)
                {
                    e = min(e,0);
                    b = false;
                }
                else if ((ar[i] + 1) % 4 == 0)
                {
                    e = min(e,1);
                    b = false;
                }
                else if (ar[i] % 2 == 0)
                {
                    c++;
                }
            }
            if (b)
            {
                if (c > 1)
                {
                    cout << 0 << endl;
                }
                else if (c == 1)
                {
                    cout << 1 << endl;
                }
                else if (c == 0)
                {
                    cout << 2 << endl;
                }
            }
            else
            {
                if (c > 1)
                {
                    cout << 0 << endl;
                }
                else if (c == 1)
                {
                    cout << min(e, 1) << endl;
                }
                else if(c==0)
                {
                    cout << e << endl;
                }
            }
        }
    }
}
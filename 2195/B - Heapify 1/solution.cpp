#include <bits/stdc++.h>
using namespace std;
 
int get_odd_part(int n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a=-1;
        for (int i = 1; i <= n; ++i)
        {
            int val;
            cin >> val;
            if (a==-1)
            {
                if (get_odd_part(val) != get_odd_part(i))
                {
                    a=1;
                }
            }
        }
        if (a==-1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
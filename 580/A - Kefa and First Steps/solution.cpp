#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int c = 1, m = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
        {
            c++;
        }
        else
        {
            m = max(m, c);
            c = 1;
        }
    }
    m = max(m, c);
    cout << m << endl;
}
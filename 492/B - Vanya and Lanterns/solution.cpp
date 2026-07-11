#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    double m = 0;
    for (int i = 1; i < n; i++)
    {
        m = max(m, double(v[i] - v[i - 1]));
    }
    double a = m / 2.0;
    a = max(a, double(max(v[0], (l - v[n - 1]))));
    cout << fixed << setprecision(10) << a << endl;
}
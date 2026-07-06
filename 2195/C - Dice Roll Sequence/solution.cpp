#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
const int INF = 1e9;
 
bool are_adjacent(int x, int y)
{
    return x != y && x + y != 7;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        vector<int> dp(6);
        for (int v = 1; v <= 6; ++v)
        {
            if (a[0] == v)
            {
                dp[v - 1] = 0;
            }
            else
            {
                dp[v - 1] = 1;
            }
        }
        for (int i = 1; i < n; ++i)
        {
            vector<int> next_dp(6, INF);
            for (int curr = 1; curr <= 6; ++curr)
            {
                int cost = (a[i] == curr) ? 0 : 1;
                for (int prev = 1; prev <= 6; ++prev)
                {
                    if (are_adjacent(curr, prev))
                    {
                        next_dp[curr - 1] = min(next_dp[curr - 1], dp[prev - 1] + cost);
                    }
                }
            }
            dp = next_dp;
        }
        int ans = INF;
        for (int v = 0; v < 6; ++v)
        {
            ans = min(ans, dp[v]);
        }
        cout << ans << "
";
    }
}
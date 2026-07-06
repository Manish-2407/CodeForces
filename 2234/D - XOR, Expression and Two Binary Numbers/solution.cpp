#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            long long n, k;
            cin >> n >> k;
            string s, z;
            cin >> s >> z;
 
            long long vec[2][2] = {0};
            for (int i = 0; i < n; i++)
            {
                vec[s[i] - '0'][z[i] - '0']++;
            }
            long long L = (1LL << k) + 1;
            auto con = [&](long long len, int v) -> long long
            {
                long long res = len / 3;
                int rem = len % 3;
                if (rem >= 1 && v == 1)
                    res++;
                if (rem >= 2 && v == 2)
                    res++;
                return res;
            };
            long long N1[2][2];
            N1[0][0] = 0;
            N1[0][1] = con(L, 0) + con(L, 2);
            N1[1][0] = N1[0][1];
            N1[1][1] = con(L, 1) + con(L, L % 3);
 
            long long ans = 0;
            for (int a1 = 0; a1 <= 1; a1++)
            {
                for (int b1 = 0; b1 <= 1; b1++)
                {
                    for (int a2 = 0; a2 <= 1; a2++)
                    {
                        for (int b2 = 0; b2 <= 1; b2++)
                        {
                            int s1 = a1 * 2 + b1;
                            int s2 = a2 * 2 + b2;
                            if (s1 > s2)
                                continue;
                            long long p = 0;
                            if (s1 == s2)
                            {
                                p = vec[a1][b1] * (vec[a1][b1] - 1) / 2;
                            }
                            else
                            {
                                p = vec[a1][b1] * vec[a2][b2];
                            }
                            int x = a1 ^ a2;
                            int y = b1 ^ b2;
                            ans += p * N1[x][y];
                        }
                    }
                }
            }
            cout << ans << "
";
        }
    }
}
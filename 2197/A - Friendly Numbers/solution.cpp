#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
long long sum_digits(long long n)
{
    long long sum = 0;
    string s = to_string(n);
    for (char c : s)
    {
        sum += c - '0';
    }
    return sum;
}
 
int main()
{
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            long long x;
            cin >> x;
            if (x % 9 != 0)
            {
                cout << 0 << endl;
                continue;
            }
            int count = 0;
            for (int k = 1; k <= 100; ++k)
            {
                long long y = x + k;
                if (y - sum_digits(y) == x)
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
}
  
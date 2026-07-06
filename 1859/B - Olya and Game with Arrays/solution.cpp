#include <iostream>
#include <algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> first;
        vector<int> second;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> a(m);
            for (auto &x : a)
                cin >> x;
            sort(a.begin(), a.end());
            first.push_back(a[0]);
                second.push_back(a[1]);
        }
        sort(second.begin(),second.end());
        sort(first.begin(), first.end());
        int lowestfirst_min;
        lowestfirst_min = first[0];
        long long sum = accumulate(second.begin(), second.end(), 0LL);
        long long final_sum = (sum) + (lowestfirst_min) - (second[0]);
        cout << final_sum << endl;
    }
    return 0;
}
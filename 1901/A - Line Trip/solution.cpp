#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int l=ar[0];
        for(int i=0;i<n;i++){
            l=max(l,(ar[i]-ar[i-1]));
        }
        l=max(l,2*(x-ar[n-1]));
        cout<<l<<endl;
    }
}
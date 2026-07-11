#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long s, k, m;
        cin >> s >> k >> m;
        long long x = m / k;
        long long rem = m % k;
 
        long long l;
        if (x % 2 == 0)
        {
            l = s;
        }
        else
        {
            l = min(s, k);
        }
        long long ans = l - rem;
        cout << max(0LL, ans) << "
";
    }
    // while(t--){
    //     int s,k,m;
    //     cin>>s>>k>>m;
    //     if(s==k){
    //         cout<<(k-m%k)<<endl;
    //     }
    //     else if(k>s){
    //         int a=m%k;
    //         if(a>=s){
    //             cout<<0<<endl;
    //         }
    //         else{
    //             cout<<s-a<<endl;
    //         }
    //     }
    //     else{
    //         long long ab=__gcd(s,k);
    //         long long l=(long long)s*k/ab;
    //         m=m%l;
    //         while(m>0){
    //             if(m-k>0){
    //                 m-=k;
    //                 a=
    //             }
    //         }
    //     }
    // }
}
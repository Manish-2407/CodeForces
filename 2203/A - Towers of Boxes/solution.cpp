#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;
        int a=1;
        a=d/m;
        a++;
        int b=1;
        if(n%a==0){
            b=n/a;
        }
        else{
            b=n/a;
            b++;
        }
        cout<<b<<endl;
    }
}
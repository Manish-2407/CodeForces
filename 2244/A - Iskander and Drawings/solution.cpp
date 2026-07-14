#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        
        long long m = 0;
        long long c = 0;
        
        for (char ch : s) {
            if (ch == '#') {
                c++;
                m = max(m, c);
            } 
            else {
                c = 0;
            }
        }
        cout << (m + 1) / 2 << "
";
    }
}
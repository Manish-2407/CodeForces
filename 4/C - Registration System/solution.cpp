#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    if (cin >> n) {
        unordered_map<string, int> d;
        string m;
 
        while (n--) {
            cin >> m;
            if (d.find(m) == d.end()) {
                cout << "OK
";
                d[m] = 1; 
            }
            else {
                cout << m << d[m] << "
";
                d[m]++; 
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string, int> ans;
    int m = 0;
    string b = "";
    for (int i = 0; i < n - 1; i++) {
        string g = s.substr(i, 2);
        ans[g]++;
        if (ans[g] > m) {
            m = ans[g];
            b = g;
        }
    }
    
    cout << b << endl;
}
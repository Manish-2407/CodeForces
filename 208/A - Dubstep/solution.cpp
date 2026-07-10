#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    string re = "";
 
    for (int i = 0; i < s.length();)
    {
        if (i <= s.length() - 3 && s.substr(i, 3) == "WUB")
        {
            i += 3;
        }
        else
        {
            if (!re.empty() && i >= 3 && s.substr(i - 3, 3) == "WUB")
            {
                re += " ";
            }
 
            re += s[i];
            i++;
        }
    }
    cout << re << "
";
}
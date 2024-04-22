#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string s;
    for (int i = 0; i < x; i++)
    {
        cin >> s;
        if (s.length() > 10)
        {
            string temp = s[0] + to_string(s.length() - 2) + s[s.length() - 1];
            cout << temp << endl;
        }
        else
            cout << s << endl;
    }
    return 0;
}
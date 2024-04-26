#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, cnt = 0;
    cin >> x;
    string s;   
    for (int i = 0; i < x; i++)
    {
        cin >> s;
        if (s.find("+") != string::npos)
            cnt++;
        else
            cnt--;
    }
    cout << cnt;
    return 0;
}
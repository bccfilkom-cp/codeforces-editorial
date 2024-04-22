#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, cnt = 0, a, b, c;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> a >> b >> c;
        int temp = a + b + c;
        if (temp > 1)
            cnt++;
    }
    cout << cnt;
    return 0;
}
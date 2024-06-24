#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, cnt = 0, temp = 0;
    cin >> m >> n;
    while (m * n >= temp + 2)
    {
        temp += 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}
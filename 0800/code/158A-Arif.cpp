#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, cnt = 0;
    cin >> a >> b;
    int nums[a];
    for (int i = 0; i < a; i++)
    {
        cin >> nums[i];
    }
    int core = nums[b - 1];
    for (int i = 0; i < a; i++)
    {
        if (nums[i] > 0 && nums[i] >= core)
            cnt++;
    }
    cout << cnt;
    return 0;
}
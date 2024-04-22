#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long temp1 = (n + a - 1) / a;
    long long temp2 = (m + a - 1) / a;
    cout << temp1 * temp2<<endl;
    return 0;
}
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

struct Dragon {
    int strength;
    int bonus;
};

bool compareStrength(const Dragon& d1, const Dragon& d2) {
    return d1.strength < d2.strength;
}

int main() {
    fastio;
    int s, n;
    cin >> s >> n;

    Dragon dragons[n];
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].strength >> dragons[i].bonus;
    }

    sort(dragons, dragons + n, compareStrength);

    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].strength) {
            s += dragons[i].bonus;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}

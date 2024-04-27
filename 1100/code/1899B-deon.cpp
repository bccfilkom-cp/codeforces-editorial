#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, resMax = 0;
        cin >> n;
        vector<int> kumulatif;
        int sum = 0;
        kumulatif.push_back(0);
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            if(b==0) b = 1;
            sum += b;
            kumulatif.push_back(sum);
        }

        for (int i = 1; i <= n; ++i) {
            vector<int> selisih;
            if (n % i == 0) {
                for (int j = i; j <= n; j += i) {
                    int sum = kumulatif[j] - kumulatif[j - i];
                    selisih.push_back(sum);
                }
                sort(selisih.begin(), selisih.end());
                resMax = max(resMax, selisih[selisih.size() - 1] - selisih[0]);
            }
        }

        cout << resMax << endl;
    }
    return 0;
}
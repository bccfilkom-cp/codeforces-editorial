#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] = arr[i] % 2;
    }
    int ganjil = count(arr, arr+n, 1);
    if (ganjil > n-ganjil) {
        for (int i = 0; i < n; i++) {
            if (arr[i]==0) {
                cout << i+1;
                break;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (arr[i]==1) {
                cout << i+1;
                break;
            }
        }

    }
    return 0;
}
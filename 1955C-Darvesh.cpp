#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n;
        signed long long int k;
        cin >> n >> k;
        int arr[n] = {0};
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int s=0,e=n-1;
        while((e-s+1) > 1 && k > 0){
            signed long long int m = min(arr[s],arr[e]);
            if (k < 2 * m) {
                arr[s] -= k / 2 + k % 2;
                arr[e] -= k / 2;
                k = 0;
            } 
            else {
                arr[s] -= m;
                arr[e] -= m;
                k -= 2 * m;
            }
            if (arr[s] == 0) s++;
            if (arr[e] == 0) e--;
        }
        cout << n - (e-s+1) + ((e-s+1) && arr[s] <= k) << endl;
    }
}
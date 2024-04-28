#include<bits/stdc++.h>
using namespace std;

bool areEqual(int arr1[], int arr2[], int N, int M)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++){
        mp[arr1[i]]++;
    }
    for (int i = 0; i < N; i++) {
        if (mp.find(arr2[i]) == mp.end())return false;
        if (mp[arr2[i]] == 0)return false;
        mp[arr2[i]]--;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n,c,d,a11=2147483647;
        cin >> n >> c >> d;
        int arr[n*n] = {0};
        for(int i=0;i<n*n;i++){
            cin >> arr[i];
            a11 = min(a11,arr[i]);
        }
        int re[n*n] = {0};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                re[(i*n) + j] = a11 + (i * c) + (j * d);
            }
        }
        int N = sizeof(arr) / sizeof(int);
        int M = sizeof(re) / sizeof(int);
        if (areEqual(arr, re, N, M)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
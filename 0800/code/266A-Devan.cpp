#include <bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define FOR(i,s,e) for(int i=s;i<e;i++)
#define FOREV(i,s,e) for(int i=s; i>=e;i--)
#define in(var) cin >> var;
#define ps(x) cout << x << " ";
#define pss(x) cout << x << '\n';
#define arrin(arr, n) for(int i = 0; i < n; i++) cin >> arr[i];
#define arr2din(arr, n, m) for(int i = 0; i < n; i++) \
    for(int j = 0; j < m; j++) cin >> arr[i][j];
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<vector<char>> vvc;
typedef vector<vector<int>> vvi;

int main(){
    fastio
    int n,l=0,c=0;
    string s;
    cin >> n >> s;

    for(int i = 1; i < n; i++) {
        if(s[i] == s[l]) {
            c++;
        } else {
            l = i;
        }
    }

    cout << c;

    return 0;
}
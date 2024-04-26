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

    int t;
    cin >> t;
    while(t--) {
        int n, m, h;
        int mh = INT_MAX, mm = INT_MAX;
        cin >> n >> h >> m;

        while(n--) {
            int a, b;
            cin >> a >> b;
            int cm = b - m;
            int ch = a - h;
            if(cm < 0) {
                cm = 60 + cm;
                ch = a - (h+1);
                a--;
            }
            if(ch < 0) {
                ch = 24 - h + a;
            }

            if(ch <= mh) {
                if(ch < mh || cm < mm) {
                    mh = ch;
                    mm = cm;                    
                }
            }
        }
        cout << mh << " " << mm << endl;
    }
    return 0;
}
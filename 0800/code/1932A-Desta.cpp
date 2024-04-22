#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int solve(char path[], int n) {
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(path[i]=='@') ans++;
        else if (path[i]=='*'){
            if(path[i+1]=='*') break;
        }
    }
    return ans;
}

int main(){
    fastio;
    int t;
    cin >> t;


    while(t--){
        int n;
        cin >> n;
        char path[n];
        for(int i = 0; i < n; i++){
            cin >> path[i];
        }
        cout << solve(path, n) << endl;
    }

    return 0;
}

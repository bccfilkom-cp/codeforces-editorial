#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> tim;
    string s,tem;
    int n,res = INT_MIN;
    cin >> n;
    while(n--){
        cin >> s;
        tim[s]++;
        if(tim[s] > res){
            res = tim[s];
            tem = s;
        }
    }
    cout << tem << "\n";
    return 0;
}
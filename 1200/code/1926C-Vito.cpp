#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
const int P = 1e9 + 7;

 int main() {
 	vector <int> dp(2e5+1, -1);
 	int sum = 0;
	for(int i=1; i<=2e5; i++) {
		sum += i%10 + i/10%10 + i/100%10 + i/1000%10 + i/10000%10 + i/100000%10;
		dp[i] = sum;
	}

	int t;
 	cin >> t;
 	while(t--){
 		int n;
 		cin >> n;
 		cout << dp[n] << endl;
 	}
 	return 0;
 }

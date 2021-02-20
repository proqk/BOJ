#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int dp[10000001];

int main() {
	int x;
	cin >> x;
	dp[1] = 0;
	for (int i = 2; i <= x; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) dp[i] = min(dp[i / 3] + 1, dp[i]);
		if (i % 2 == 0) dp[i] = min(dp[i / 2] + 1, dp[i]);
	}
	cout << dp[x];
}

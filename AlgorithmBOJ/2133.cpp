//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	vector<int> dp(n + 1);
//
//	dp[2] = 3;
//	for (int i = 4; i <= n; i = i + 2) {
//		dp[i] += dp[i - 2] * dp[2];
//
//		for (int j = i - 4; j >= 2; j = j - 2) {
//			dp[i] += dp[j] * 2;
//		}
//
//		dp[i] += 2;
//	}
//
//	printf("%d", dp[n]);
//	return 0;
//}
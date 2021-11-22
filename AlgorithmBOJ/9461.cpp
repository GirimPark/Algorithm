//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int t, n;
//	scanf("%d", &t);
//	vector<long long> dp(101);
//
//	dp[1] = 1; dp[2] = 1; dp[3] = 1; dp[4] = 2;
//	dp[5] = 2; dp[6] = 3; dp[7] = 4; dp[8] = 5;
//
//	for (int i = 1; i <= t; i++) {
//		scanf("%d", &n);
//
//		for (int j = 9; j <= n; j++) {
//			dp[j] = dp[j - 5] + dp[j - 1];
//		}
//
//		printf("%lld\n", dp[n]);
//	}
//	
//	return 0;
//}
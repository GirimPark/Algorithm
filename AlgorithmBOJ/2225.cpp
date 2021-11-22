//#include <iostream>
//#include <vector>
//
//#define Moduler 1000000000
//using namespace std;
//
//int main() {
//	int n, k;
//	scanf("%d %d", &n, &k);
//	vector<vector<long long>> dp(k + 1, vector<long long>(n + 1));
//
//	for (int i = 0; i <= n; i++) {
//		dp[1][i] = 1;
//	}
//
//	for (int i = 2; i <= k; i++) {
//		for (int j = 0; j <= n; j++) {
//			for (int m = 0; m <= j; m++) {
//				dp[i][j] += (dp[i - 1][m]) % Moduler;
//			}
//		}
//	}
//	printf("%lld", dp[k][n] % Moduler);
//	return 0;
//}
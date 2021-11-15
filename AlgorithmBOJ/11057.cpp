//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	// (수의 길이 n, 마지막 수 num)
//	vector<vector<int>> dp(1001, vector<int>(10));
//
//	for (int i = 0; i < 10; i++)	dp[1][i] = 1;
//
//	for (int i = 2; i <= n; i++) {
//		for (int j = 0; j < 10; j++) {
//			for (int k = 0; k <= j; k++) {
//				dp[i][j] = (dp[i][j] + dp[i - 1][k]) % 10007;
//			}
//		}
//	}
//
//	int result = 0;
//	for (int i = 0; i < 10; i++)	result = (result + dp[n][i]) % 10007;
//
//	printf("%d", result);
//
//	return 0;
//}
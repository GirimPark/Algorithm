//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int tc, n;
//	scanf("%d", &tc);
//
//	for (int i = 0; i < tc; i++) {
//		scanf("%d", &n);
//		vector<vector<int>> sticker(3, vector<int>(n + 1));
//		vector<vector<int>> dp(3, vector<int>(n + 1));
//
//		for (int j = 1; j <= 2; j++) {
//			for (int k = 1; k <= n; k++) {
//				scanf("%d", &sticker[j][k]);
//			}
//		}
//		
//		dp[1][1] = sticker[1][1];
//		dp[2][1] = sticker[2][1];
//
//		for (int j = 2; j <= n; j++) {
//			dp[1][j] = sticker[1][j] + max(dp[2][j - 1], dp[2][j - 2]);
//			dp[2][j] = sticker[2][j] + max(dp[1][j - 1], dp[1][j - 2]);	
//		}
//		
//		printf("%d\n", max(dp[1][n], dp[2][n]));
//	}
//	
//	return 0;
//}
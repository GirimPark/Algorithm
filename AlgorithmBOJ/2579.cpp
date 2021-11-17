//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	vector<int> stairs(n + 1);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &stairs[i]);
//	vector<int> dp(n + 1);
//
//	dp[1] = stairs[1];
//	dp[2] = stairs[1] + stairs[2];
//
//	for (int i = 3; i <= n; i++) {
//		dp[i] = max(dp[i - 2] + stairs[i], 
//			dp[i - 3] + stairs[i - 1] + stairs[i]);
//	}
//
//	printf("%d", dp[n]);
//	return 0;
//}
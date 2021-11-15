//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	vector<int> wine(n + 1);
//	vector<int> dp(n + 1);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &wine[i]);
//
//	dp[1] = wine[1]; dp[2] = wine[2] + dp[1];
//	for (int i = 3; i <= n; i++) {
//		dp[i] = max(dp[i - 3] + wine[i - 1] + wine[i], 
//			max(dp[i - 2] + wine[i], dp[i - 1]));
//	}
//
//	printf("%d", dp[n]);
//
//	return 0;
//}
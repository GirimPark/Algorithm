//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	vector<int> p(n + 1);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &p[i]);
//	vector<int> dp(n + 1);
//	dp[1] = p[1];
//
//	for (int i = 2; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			dp[i] = max(dp[i], dp[i - j] + p[j]);
//		}
//	}
//	
//	printf("%d", dp[n]);
//}
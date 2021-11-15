//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n, answer = 0;
//	scanf("%d", &n);
//	vector<int> arr(n + 1);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &arr[i]);
//	vector<int> dp(n + 1);
//
//	for (int i = 1; i <= n; i++) {
//		int max_sum = 0;
//		for (int j = 1; j <= i; j++) {
//			if (arr[i] > arr[j] && dp[j] > max_sum)
//				max_sum = dp[j];
//		}
//		dp[i] = max_sum + arr[i];
//		answer = max(answer, dp[i]);
//	}
//
//	printf("%d", answer);
//	return 0;
//}
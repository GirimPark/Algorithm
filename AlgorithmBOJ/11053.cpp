//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n, answer = 0;
//
//	scanf("%d", &n);
//	vector<int> arr(n + 1);
//	vector<int> dp(n + 1);
//
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &arr[i]);
//	
//	// 현재 위치 i, 비교 대상 j
//	for (int i = 1; i <= n; i++) {
//		int dp_max = 0;
//
//		for (int j = 1; j <= i; j++) {
//			if (arr[i] > arr[j] && dp[j] > dp_max)
//				dp_max = dp[j];
//		}
//		dp[i] = dp_max + 1;
//		answer = max(answer, dp[i]);
//	}
//
//	printf("%d", answer);
//
//	return 0;
//}
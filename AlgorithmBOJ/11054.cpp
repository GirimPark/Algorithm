//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n, answer = 0;
//	bool flag = false;
//	scanf("%d", &n);
//	vector<int> arr(n + 1);
//	for (int i = 1; i <= n; i++) 
//		scanf("%d", &arr[i]);
//	
//	vector<int> dp(n + 1);
//	vector<int> dpR(n + 1);
//	
//	//	증가수열
//	for (int i = 1; i <= n; i++) {
//		int dp_max = 0;
//		for (int j = 1; j <= i; j++) {
//			if (arr[i] > arr[j] && dp[j] > dp_max)
//				dp_max = dp[j];
//		}
//		dp[i] = dp_max + 1;
//	}
//
//	//	증가수열 reverse
//	for (int i = n; i > 0; i--) {
//		int dp_max = 0;
//		for (int j = n; j >= i; j--) {
//			if (arr[i] > arr[j] && dpR[j] > dp_max)
//				dp_max = dpR[j];
//		}
//		dpR[i] = dp_max + 1;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (answer < dp[i] + dpR[i])
//			answer = dp[i] + dpR[i];
//	}
//
//	printf("%d", answer - 1);
//	return 0;
//}
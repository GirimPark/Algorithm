//#include <iostream>
//#include <string>
//#define mod 1000000
//
//using namespace std;
//
//int main() {
//	string pw;
//	//scanf("%s", &pw);
//	cin >> pw;
//
//	if (pw[0] == '0') {
//		printf("%d", 0);
//		return 0;
//	}
//
//	int dp[5001] = { 1, 1 };
//	// pw가 2자리일 때(pw[1])부터 보기 시작
//	for (int i = 2; i <= pw.size(); i++) {
//		if (pw[i - 1] != '0') {
//			dp[i] = dp[i - 1] % mod;
//		}
//
//		int n = (pw[i - 2] - '0') * 10 + (pw[i - 1] - '0');
//		if (10 <= n && n <= 26) {
//			dp[i] = (dp[i] + dp[i - 2]) % mod;
//		}
//	}
//
//	printf("%d", dp[pw.size()]);
//	return 0;
//}
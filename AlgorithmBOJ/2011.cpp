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
//	// pw�� 2�ڸ��� ��(pw[1])���� ���� ����
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
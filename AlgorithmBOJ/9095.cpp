//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int caseNum;
//	scanf("%d", &caseNum);
//	vector<int> testCase(caseNum + 1);
//	for(int i=1; i<=caseNum; i++)
//		scanf("%d", &testCase[i]);
//	
//	vector<int> dp(12);
//	dp[1] = 1, dp[2] = 2, dp[3] = 4;
//	for (int i = 4; i < dp.size(); i++) 
//		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//	
//	for (int i = 1; i <= caseNum; i++)
//		printf("%d\n", dp[testCase[i]]);
//
//	return 0;
//}
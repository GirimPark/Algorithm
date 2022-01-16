//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	vector<int> num(N);
//	for (int i = 0; i < N; i++)
//		scanf("%d", &num[i]);
//
//	int cnt = 0, answer = 0;
//	for (int i = 0; i < num.size(); i++) {
//		for (int j = 2; j <= num[i] / 2; j++) {
//			if ( num[i] % j == 0) {
//				cnt++;
//				break;
//			}
//		}
//		if (num[i] != 1 && cnt == 0)
//			answer++;
//		else
//			cnt = 0;
//	}
//
//	printf("%d", answer);
//}
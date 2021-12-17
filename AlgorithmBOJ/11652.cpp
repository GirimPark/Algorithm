//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	vector<long long> card(n);
//	for (int i = 0; i < n; i++) 
//		scanf("%lld", &card[i]);
//	
//	sort(card.begin(), card.end());
//
//	int max = 1, cnt = 1;
//	long long answer = card[0];
//	for (int i = 1; i < n; i++) {
//		if (card[i] == card[i - 1]) {
//			cnt++;
//			if (cnt > max) {
//				max = cnt;
//				answer = card[i];
//			}
//		}
//		else 
//			cnt = 1;
//		
//	}
//
//	printf("%lld", answer);
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	int fct = N;
//
//	int cnt = 0;
//	N--;
//	while (N != 0) {
//		if (fct == 0) {
//			printf("%d", 0);
//			return 0;
//		}
//
//		fct *= N--;
//
//		while (fct % 10 == 0) {
//			fct /= 10;
//			cnt++;
//		}
//		
//		if (fct % 10 != 0) {
//			fct %= 100;
//		}
//	}
//
//	printf("%d", cnt);
//}
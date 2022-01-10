//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	
//	int max_num = max(a, b);
//	int min_num = min(a, b);
//
//	int maxdev, minmul;
//	for (int i = max_num; i > 0; i--) {
//		if (a%i == 0 && b%i == 0) {
//			maxdev = i;
//			break;
//		}
//	}
//	for (int i = min_num; ; i+=min_num) {
//		if (i%a == 0 && i%b == 0) {
//			minmul = i;
//			break;
//		}
//	}
//
//	printf("%d\n%d", maxdev, minmul);
//
//	return 0;
//}
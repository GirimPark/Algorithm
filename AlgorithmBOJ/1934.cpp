//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int gcd(int a, int b) {
//	int n;
//	while (b != 0) {
//		n = a % b;
//		a = b;
//		b = n;
//	}
//
//	return a;
//}
//
////	a * b에서 오버플로우가 발생하지 않도록 미리 한쪽을 나눠둠
//int lcm(int a, int b) {
//	return a * (b / gcd(a, b));
//}
//
//int main() {
//	int T, A, B;
//	scanf("%d", &T);
//
//	for (int i = 0; i < T; i++) {
//		scanf("%d %d", &A, &B);
//
//		int a = max(A, B);
//		int b = min(A, B);
//
//		printf("%d\n", lcm(a, b));
//	}
//	
//	return 0;
//}
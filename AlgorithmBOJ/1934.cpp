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
////	a * b���� �����÷ο찡 �߻����� �ʵ��� �̸� ������ ������
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
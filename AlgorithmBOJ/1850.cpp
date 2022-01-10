//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int gcd(long long a, long long b) {
//	long long n;
//	while (b != 0) {
//		n = a % b;
//		a = b;
//		b = n;
//	}
//
//	return a;
//}
//
//
//int main() {
//	long long A, B;
//	scanf("%lld %lld", &A, &B);
//
//	long long a = max(A, B);
//	long long b = min(A, B);
//	int G = gcd(a, b);
//
//	for (int i = 0; i < G; i++) 
//		printf("%d", 1);
//	
//	
//	return 0;
//}
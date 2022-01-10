//#include <iostream>
//#include <vector>
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
//int main() {
//	int t, n;
//	scanf("%d", &t);
//
//	int a, b;
//	long long sum = 0;
//	for (int i = 0; i < t; i++) {
//		scanf("%d", &n);
//		vector<int> arr(n);
//
//		for (int j = 0; j < n; j++)
//			scanf("%d", &arr[j]);
//
//		for (int j = 0; j < (n - 1); j++) {
//			for (int k = j + 1; k < n; k++) {
//				a = max(arr[j], arr[k]);
//				b = min(arr[j], arr[k]);
//				sum += gcd(a, b);
//			}
//		}
//		printf("%lld\n", sum);
//		sum = 0;
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//int main() {
//	int M, N;
//	scanf("%d %d", &M, &N);
//
//	vector<int> prime(N + 1);
//	for (int i = 2; i <= N; i++)
//		prime[i] = i;
//
//	for (int i = 2; i <= sqrt(N); i++) {
//		if (prime[i] == 0)
//			continue;
//		for (int j = i + i; j <= N; j += i) {
//			prime[j] = 0;
//		}
//	}
//
//	for (int i = M; i <= N; i++) {
//		if (prime[i] != 0)
//			printf("%d\n", prime[i]);
//	}
//}
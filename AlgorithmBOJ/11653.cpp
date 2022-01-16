//#include <iostream>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//int main() {
//	int N;
//	scanf("%d", &N);
//
//	//	소수 배열 만들어놓기
//	vector<bool> prime(N + 1, true);
//	prime[0] = prime[1] = false;
//	for (int i = 2; i <= sqrt(prime.size()); i++) {
//		if (prime[i] == false)	continue;
//		for (int j = i + i; j < prime.size(); j += i) {
//			prime[j] = false;
//		}
//	}
//
//	for (int i = 2; i < prime.size(); i++) {
//		if (N == 0)	break;
//		if (prime[i] == true && N%i == 0) {
//			printf("%d\n", i);
//			N /= i;
//			i = 1;
//		}
//	}
//}
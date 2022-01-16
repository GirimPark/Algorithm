//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//int main() {
//	int temp;
//	vector<int> input;
//	scanf("%d", &temp);
//	while (temp != 0) {
//		input.push_back(temp);
//		scanf("%d", &temp);
//	}
//
//	//	소수 배열 만들기
//	int arr_max = *max_element(input.begin(), input.end());
//	vector<int> prime(arr_max + 1);
//	for (int i = 2; i < prime.size(); i++)
//		prime[i] = i;
//	
//	for (int i = 2; i <= sqrt(prime.size()); i++) {
//		if (prime[i] == 0)	continue;
//		for (int j = i + i; j < prime.size(); j += i) {
//			prime[j] = 0;
//		}
//	}
//
//	//	정답 구하기
//	bool isPrinted = false;
//	for (int i = 0; i < input.size(); i++) {
//		for (int j = 2; j < prime.size(); j++) {
//			if (prime[j] != 0 && prime[input[i] - j] != 0) {
//				printf("%d = %d + %d\n", input[i], j, input[i] - j);
//				isPrinted = true;
//				break;
//			}
//		}
//		if (!isPrinted)
//			printf("Goldbach's conjecture is wrong.\n");
//	}
//}
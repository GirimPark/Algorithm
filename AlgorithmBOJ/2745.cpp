//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string N;
//	int B;
//	cin >> N >> B;
//
//	int mul = 1;
//	long long answer = 0;
//	for (int i = (N.length() - 1); i >= 0; i--) {
//		if ((N[i] - '0') < 10)
//			answer += ((N[i] - '0') * mul);
//		else
//			answer += ((N[i] - 'A' + 10) * mul);
//		mul *= B;
//	}
//
//	printf("%lld", answer);
//}
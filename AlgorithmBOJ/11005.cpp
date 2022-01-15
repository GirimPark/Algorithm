//#include <iostream>
//#include <list>
//using namespace std;
//
//int main() {
//	long long N;
//	int B;
//	scanf("%lld %d", &N, &B);
//	list<int> trans;
//	list<int>::iterator iter;
//
//	while (N != 0) {
//		trans.push_front(N%B);
//		N /= B;
//	}
//	if (N%B != 0)	trans.push_front(N%B);
//	
//	for (iter = trans.begin(); iter != trans.end(); iter++) {
//		if (*iter < 10)	
//			printf("%d", *iter);
//		else 
//			cout << char('A' + (*iter - 10));
//	}
//}
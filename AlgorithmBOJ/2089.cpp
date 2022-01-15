//#include <iostream>
//#include <stack>
//using namespace std;
//
//#define ll long long
//int main() {
//	 ll N;
//	 scanf("%lld", &N);
//
//	 if (N == 0) {
//		 printf("%d", 0);
//		 return 0;
//	 }
//
//	 stack<int> mBinary;
//	 while (N != 0) {
//		 if (N % 2 == 0) {
//			 N /= -2;
//			 mBinary.push(0);
//			 continue;
//		 }
//		 if (N > 0 && N % 2 == 1) {
//			 N /= -2;
//			 mBinary.push(1);
//			 continue;
//		 }
//		 if (N < 0 && -N % 2 == 1) {
//			 N = (-N + 1) / 2;
//			 mBinary.push(1);
//			 continue;
//		 }
//	 }
//
//	 while (!mBinary.empty()) {
//		 printf("%d", mBinary.top());
//		 mBinary.pop();
//	 }
//}
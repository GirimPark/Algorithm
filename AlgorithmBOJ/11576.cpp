//#include <iostream>
//#include <stack>
//using namespace std;
//
//#define ll long long
//int main() {
//	int A, B;
//	scanf("%d %d", &A, &B);
//	int m;
//	scanf("%d", &m);
//
//	stack<int> numofA;
//	int temp;
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &temp);
//		numofA.push(temp);
//	}
//
//	if (m == 0 && numofA.top() == 0) {
//		printf("%d", 0);
//		return 0;
//	}
//		
//	ll numof10 = 0;
//	int mul = 1;
//	int N = numofA.size();
//	for (int i = 0; i < N; i++) {
//		numof10 += (numofA.top()*mul);
//		numofA.pop();
//		mul *= A;
//	}
//
//	stack<int> numofB;
//	while (numof10 != 0) {
//		numofB.push(numof10%B);
//		numof10 /= B;
//	}
//
//	N = numofB.size();
//	for (int i = 0; i < N; i++) {
//		printf("%d ", numofB.top());
//		numofB.pop();
//	}
//}
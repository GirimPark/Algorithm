//#include <iostream>
//#include <list>
//#include <vector>
//using namespace std;
//
//int main() {
//	int N, K;
//	scanf("%d %d", &N, &K);
//	list<int> peo;
//	for (int i = 0; i < N; i++)
//		peo.push_back(i + 1);
//	list<int>::iterator iter = peo.begin();
//
//	vector<int> yos;
//
//	int cnt = 1;
//	while (!peo.empty()) {
//		if (iter == peo.end()) 
//			iter = peo.begin();
//		
//		if (cnt == K) {
//			yos.push_back(*iter);
//			peo.erase(iter++);
//			cnt = 1;
//		}
//		else {
//			iter++;
//			cnt++;
//		}
//	}
//
//	printf("<");
//	for (int i = 0; i < (N - 1); i++)
//		printf("%d, ", yos[i]);
//	printf("%d>", yos[N - 1]);
//}
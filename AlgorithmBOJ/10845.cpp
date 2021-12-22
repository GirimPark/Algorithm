//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//
//int main() {
//	int N;
//	queue<int> q;
//	scanf("%d", &N);
//	cin.ignore();
//	string com;
//
//	for (int i = 0; i < N; i++) {
//		getline(cin, com);
//
//		if (com.find("push") != string::npos) {
//			q.push(stoi(com.substr(5)));
//			continue;
//		}
//		if (com == "pop") {
//			if (q.empty())
//				printf("%d\n", -1);
//			else {
//				printf("%d\n", q.front());
//				q.pop();
//			}
//			continue;
//		}
//		if (com == "size") {
//			printf("%d\n", q.size());
//			continue;
//		}
//		if (com == "empty") {
//			if (q.empty())
//				printf("%d\n", 1);
//			else
//				printf("%d\n", 0);
//			continue;
//		}
//		if (com == "front") {
//			if (q.empty())
//				printf("%d\n", -1);
//			else
//				printf("%d\n", q.front());
//			continue;
//		}
//		if (com == "back") {
//			if (q.empty())
//				printf("%d\n", -1);
//			else
//				printf("%d\n", q.back());
//			continue;
//		}
//	}
//
//	return 0;
//}
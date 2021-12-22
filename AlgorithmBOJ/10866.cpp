//#include <iostream>
//#include <string>
//#include <deque>
//using namespace std;
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	cin.ignore();
//	deque<int> dq;
//	string com;
//
//	for (int i = 0; i < N; i++) {
//		getline(cin, com);
//
//		if (com.find("push_front") != string::npos) {
//			dq.push_front(stoi(com.substr(11)));
//			continue;
//		}
//
//		if (com.find("push_back") != string::npos) {
//			dq.push_back(stoi(com.substr(10)));
//			continue;
//		}
//
//		if (com=="pop_front") {
//			if (!dq.empty()) {
//				printf("%d\n", dq.front());
//				dq.pop_front();
//			}
//			else 
//				printf("%d\n", -1);
//			
//			continue;
//		}
//
//		if (com == "pop_back") {
//			if (!dq.empty()) {
//				printf("%d\n", dq.back());
//				dq.pop_back();
//			}
//			else
//				printf("%d\n", -1);
//
//			continue;
//		}
//
//		if (com == "size") {
//			printf("%d\n", dq.size());
//			continue;
//		}
//
//		if (com == "empty") {
//			if(!dq.empty())
//				printf("%d\n", 0);
//			else
//				printf("%d\n", 1);
//			continue;
//		}
//
//		if (com == "front") {
//			if (!dq.empty())
//				printf("%d\n", dq.front());
//			else
//				printf("%d\n", -1);
//			continue;
//		}
//
//		if (com == "back") {
//			if (!dq.empty())
//				printf("%d\n", dq.back());
//			else
//				printf("%d\n", -1);
//			continue;
//		}
//	}
//
//	return 0;
//}
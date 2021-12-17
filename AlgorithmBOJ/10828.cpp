//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	cin.ignore();
//	vector<int> st;
//	string com;
//
//	for (int i = 0; i < n; i++) {
//		getline(cin, com);
//
//		if (com.find("push") != string::npos) {
//			st.push_back(stoi(com.substr(5)));
//			continue;
//		}
//		if (com == "pop") {
//			if (!st.empty()) {
//				printf("%d\n", st.back());
//				st.pop_back();
//				continue;
//			}
//			else {
//			printf("%d\n", -1);
//			continue;
//			}
//		}
//		if (com == "size") {
//			printf("%d\n", st.size());
//			continue;
//		}
//		if (com == "empty") {
//			printf("%d\n", st.empty());
//			continue;
//		}
//		if (com == "top") {
//			if (!st.empty()) {
//				printf("%d\n", st.back());
//				continue;
//			}
//			else {
//				printf("%d\n", -1);
//				continue;
//			}
//		}
//			
//	}
//
//	return 0;
//}
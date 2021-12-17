//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	vector<char> vps;
//
//	string str;
//	int num = 0;
//	bool flag = false;
//
//	for (int i = 0; i < t; i++) {
//		cin >> str;
//		for (int j = 0; j < str.size(); j++)
//			vps.push_back(str.at(j));
//
//		int size = vps.size();
//		for (int j = 0; j < size; j++) {
//			if (vps.back() == ')') {
//				num++;
//				vps.pop_back();
//			}
//			else {
//				num--;
//				vps.pop_back();
//			}
//
//			if (num < 0) {
//				printf("NO\n");
//				flag = true;
//				break;
//			}
//		}
//		
//		if (flag == true) {
//			flag = false;
//			vps.clear();
//			num = 0;
//			continue;
//		}
//
//		if (num==0)
//			printf("YES\n");
//		else
//			printf("NO\n");
//
//		vps.clear();
//		num = 0;
//	}
//
//	return 0;
//}
//
////	¿¾³¯¿¡ Ç¬ Á¤¼® Ç®ÀÌ(stack)
////#include<iostream>
////#include<string>
////#include<stack>
////
////using namespace std;
////
////bool vps(string str) {
////	stack<char> stack;
////
////	for (int i = 0; i < str.length(); i++) {
////		if (str[i] == '(') stack.push(str[i]);
////		else {
////			if (stack.empty()) {
////				return false;
////			}
////			else {
////				stack.pop();
////			}
////		}
////	}
////
////	return stack.empty();
////}
////
////int main() {
////	int n; string str;
////	cin >> n;
////
////	for (int i = 0; i < n; i++) {
////		cin >> str;
////
////		if (vps(str)) {
////			cout << "YES" << endl;
////		}
////		else {
////			cout << "NO" << endl;
////		}
////	}
////
////	return 0;
////}
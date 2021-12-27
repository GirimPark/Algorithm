//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	getline(cin, s);
//
//	for (int i = 0; i < s.length(); i++) {
//		if (0 <= s[i] - 'A' && s[i] - 'A' < 26) {
//			if (s[i] - 'A' < 13)
//				s[i] = char(s[i] + 13);
//			else
//				s[i] = char(s[i] - 13);
//			continue;
//		}
//		if (0 <= s[i] - 'a' && s[i] - 'a' < 26) {
//			if (s[i] - 'a' < 13)
//				s[i] = char(s[i] + 13);
//			else
//				s[i] = char(s[i] - 13);
//		}
//	}
//
//	cout << s;
//
//	return 0;
//}
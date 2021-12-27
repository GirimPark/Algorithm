//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string str;
//	int small = 0, big = 0, num = 0, space = 0;
//
//	for (int i = 0; i < 100; i++) {
//		getline(cin, str);
//		if (str == "")	break;
//
//		for (int j = 0; j < str.length(); j++) {
//			if (0 <= str[j] - 'a' && str[j] - 'a' < 26) {
//				small++;
//				continue;
//			}
//			if (0 <= str[j] - 'A' && str[j] - 'A' < 26) {
//				big++;
//				continue;
//			}
//			if (0 <= str[j] - '0' && str[j] - '0' < 11) {
//				num++;
//				continue;
//			}
//			if (str[j] == ' ') {
//				space++;
//				continue;
//			}
//		}
//
//		printf("%d %d %d %d\n", small, big, num, space);
//		small = 0; big = 0; num = 0; space = 0;
//	}
//
//	return 0;
//}
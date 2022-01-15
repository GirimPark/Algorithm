//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//	string octal;
//	cin >> octal;
//	vector<int> binary;
//
//	if (octal == "0")	binary.push_back(0);
//
//	int temp, cnt = 0;
//	while (octal != "") {
//		temp = octal[octal.length() - 1] - '0';
//		octal.erase(octal.length() - 1);
//
//		while (cnt != 3) {
//			binary.push_back(temp % 2);
//			temp /= 2;
//			cnt++;
//		}
//		cnt = 0;
//	}
//
//	vector<int>::iterator iter;
//	for (iter = binary.end() - 1; iter != binary.begin(); iter--) {
//		if (*iter == 0) {
//			binary.erase(iter--);
//			iter++;
//		}
//		else	break;
//	}
//
//	for (long long i = binary.size() - 1; i > -1; i--)
//		printf("%d", binary[i]);
//}
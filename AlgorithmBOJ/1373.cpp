//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//	string binary;
//	cin >> binary;
//
//	vector<int> octal;
//	int temp = 0;
//	int mul = 1;
//	for (long long i = (binary.length() - 1); i > -1; i--) {
//		temp += ((binary[i] - '0') * mul);
//		mul *= 2;
//
//		if (mul == 8) {
//			mul = 1;
//			octal.push_back(temp);
//			temp = 0;
//		}
//	}
//	if (temp != 0)
//		octal.push_back(temp);
//	if (octal.size() == 0)	octal.push_back(0);
//
//	for (long long i = (octal.size() - 1); i > -1; i--)
//		printf("%d", octal[i]);
//
//	return 0;
//}
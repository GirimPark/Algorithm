//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	vector<int> vec;
//	string input;
//	cin >> input;
//	int answer = 0;
//
//	for (int i = 0; i < input.length(); i++) {
//		//	������
//		if (i < (input.length() - 1) && 
//			input[i] == '(' && input[i + 1] == ')') {
//			if (!vec.empty()) {
//				for (int j = 0; j < vec.size(); j++)
//					vec[j]++;
//			}
//			i++;
//			continue;
//		}
//
//		//	����� ����
//		else if (input[i] == '(')
//				vec.push_back(0);
//
//		//	����� ��
//		else if (input[i] == ')') {
//			answer += (vec.back() + 1);
//			vec.pop_back();
//		}
//	}
//
//	printf("%d", answer);
//
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Student {
//	string name;
//	int korean;
//	int english;
//	int math;
//};
//
//bool compare(Student a, Student b) {
//	if (a.korean == b.korean &&
//		a.english == b.english &&
//		a.math == b.math)
//		return a.name < b.name;
//	else if (a.korean == b.korean &&
//		a.english == b.english)
//		return a.math > b.math;
//	else if (a.korean == b.korean)
//		return a.english < b.english;
//	else
//		return a.korean > b.korean;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	string name;
//	int korean, english, math;
//	vector<struct Student> arr;
//	for (int i = 0; i < n; i++) {
//		cin >> name >> korean >> english >> math;
//		Student thing = { name, korean, english, math };
//		arr.push_back(thing);
//	}
//	
//	sort(arr.begin(), arr.end(), compare);
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i].name << '\n';
//
//	return 0;
//}
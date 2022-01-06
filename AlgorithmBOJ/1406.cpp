#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	string str;
	cin >> str;
	list<char> s(str.begin(), str.end());
	list<char>::iterator cursor = s.end();
	int m;
	scanf("%d", &m);

	char com; char x;
	for (int i = 0; i < m; i++) {
		cin >> com;

		if (com == 'L') {
			if (cursor != s.begin())	cursor--;
			continue;
		}
		if (com == 'D') {
			if (cursor != s.end())	cursor++;
			continue;
		}
		if (com == 'B') {
			if (cursor != s.begin()) {
				cursor--;
				s.erase(cursor++);
			}
			continue;
		}
		if (com == 'P') {
			cin >> x;
			s.insert(cursor, x);
			continue;
		}
	}

	for (cursor = s.begin(); cursor != s.end(); cursor++) 
		printf("%c", *cursor);
	
	
	return 0;
}
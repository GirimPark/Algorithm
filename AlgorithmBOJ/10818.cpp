//#include <stdio.h>
//
//// ���;��� �迭 �����Ҵ����� Ǯ��
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	int *num = new int[n];
//	for (int i = 0; i < n; i++)
//		scanf("%d", &num[i]);
//
//	int max = num[0], min = num[0];
//	for (int i = 0; i < n; i++) {
//		if (num[i] > max)	max = num[i];
//		if (num[i] < min)	min = num[i];
//	}
//
//	printf("%d %d", min, max);
//
//	delete[] num;
//
//	return 0;
//}
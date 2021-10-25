//#include <stdio.h>
//
//int main() {
//	int n, flag = 1;
//	scanf("%d", &n);
//
//	// 상단부
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j < i; j++)
//			printf("*");
//		for (int j = 0; j < 2 * (n - i); j++)
//			printf(" ");
//		for (int j = 0; j < i; j++)
//			printf("*");
//		printf("\n");
//	}
//	// 하단부
//	for (int i = n - 1; i > 0; i--) {
//		for (int j = i; j > 0; j--)
//			printf("*");
//		for (int j = 0; j < 2 * (n - i); j++)
//			printf(" ");
//		for (int j = i; j > 0; j--)
//			printf("*");
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	//앞 공백 = n-1, 중간 공백 = 2(n-1)-1 = 2n-3, 마지막층 = 2n-1
//	for (int i = 1; i <= n; i++) {
//		if (i == 1) {
//			for (int j = 0; j < (n - 1); j++) {
//				printf(" ");
//			}
//			printf("*\n");
//		}
//		else if (i == n) {
//			for (int j = 0; j < (2 * n - 1); j++)
//				printf("*");
//		}
//		else {
//			for (int j = 0; j < (n - i); j++)
//				printf(" ");
//			
//			printf("*");
//
//			for (int j = 0; j < (2 * i - 3); j++)
//				printf(" ");
//
//			printf("*\n");
//		}
//	}
//	return 0;
//}
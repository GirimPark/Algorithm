//#include <iostream>
//
//int main() {
//	int x, y, num = 0;
//	scanf("%d %d", &x, &y);
//
//	// 월 -> 일 치환
//	for (int i = 1; i < x; i++) {
//		if (i == 28)	num += 28;
//		if (i == 4 || i == 6 || i == 9 || i == 11)
//			num += 30;
//		if (i == 1 || i == 3 || i == 5 || i == 7 
//			|| i == 8 || i == 10 || i == 12)
//			num += 31;
//	}
//	num += y;
//	num %= 7;
//
//	switch (num) {
//		case 0:
//			printf("SUN");
//			break;
//		case 1:
//			printf("MON");
//			break;
//		case 2:
//			printf("TUE");
//			break;
//		case 3:
//			printf("WED");
//			break;
//		case 4:
//			printf("THU");
//			break;
//		case 5:
//			printf("FRI");
//			break;
//		case 6:
//			printf("SAT");
//			break;
//	}
//
//	return 0;
//}
#include <stdio.h>

int main(void) {
	char ch = '9';
	int number = ch - 48; // '9' - 48
	int n = 9;

	printf("문자 : %c, 숫자 : %d, 수 : %d\n", ch, number, n);
	// 예상 ch = 9, number = 9, n = 9

	ch += 1;
	number += 1;
	n += 1;

	printf("문자 : %c, 숫자 : %d, 수 : %d\n", ch, number, n);
	// 예상 ch = 9, number = 10, n = 10
	// 결과 ch - 출력 불가

	return 0;
}
#include <stdio.h>

int main(void) {
	char ch = '9';
	int number = ch - 48; // '9' - 48
	int n = 9;

	printf("���� : %c, ���� : %d, �� : %d\n", ch, number, n);
	// ���� ch = 9, number = 9, n = 9

	ch += 1;
	number += 1;
	n += 1;

	printf("���� : %c, ���� : %d, �� : %d\n", ch, number, n);
	// ���� ch = 9, number = 10, n = 10
	// ��� ch - ��� �Ұ�

	return 0;
}
#include <stdio.h>

int main(void) {
	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);

	// ���� m�� n�� ������� �ʰ� �� ������ ���� ��ȯ
	int* p = &m; // ������ p�� m�� ����Ű����
	
	dummy = *p; // ���� dummy�� m�� ���� // = n

	*p = n; // ���� m�� n�� ����
	p = &n; // ������ p�� n�� ����Ű����

	*p = dummy; // ���� n�� dummy�� ���� // n =

	printf("%d %d\n", m, n);

	return 0;
}
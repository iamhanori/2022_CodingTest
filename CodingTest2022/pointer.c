#include <stdio.h>

int main(void) {
	int number = 100;
	printf("number �ּ� : %p �� : %d\n", &number, number);
	
	int n = 5; // n�̶�� ���� ����, �� 5 ����
	printf("n�� �� : %d\n", n); // 5 
	int* ptr = &n; // ptr n�� �ּҸ� ����Ű�� �����ͷ� ����
	printf("n�� �� : %d\n", n); // 5
	*ptr = 10; // ptr�� ����Ű�� ���� 10�� �־��
	// ��, n�� �� 5�� 10���� ��ü
	printf("n�� �� : %d\n", n); 

	return 0;
}
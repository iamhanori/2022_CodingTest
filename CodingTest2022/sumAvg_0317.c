#include <stdio.h>
#include <time.h>

int main(void) {
	int arr[10];
	int i, sum = 0;
	double avg = 0;
	srand(time(NULL)); // (time ��) : �Ź� �̴� ���ڰ� �ٸ�

	// �迭�� ���� 
	for (int i = 0; i < 10; i++) {
		arr[i] = (rand() % 100) + 1; // �ܵ� srand, rand > ������ ���� : ���� ������ ��
	} //sizeof(arr) / sizeof(int)

	for (int i = 0; i < 10; i++) {
		printf("%d	", arr[i]);
	}
	printf("\n");

	// ��
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	} 

	// ���
	avg = (double)sum / 10;
	
	//���
	printf("�� : %d\n", sum);
	printf("��� : %lf\n", avg);
}

#include <stdio.h>

int main(void) {
	char* pc = (char*)100; // �����ϳ� �� �̿����� ���� (�ּҰ����� �ٲ���)
	int* pi = (int*)100;
	double* pd = (double*)100;
	//pd = 100; // ���߻�
	printf(" %u %u %u\n", (int)(pc - 1), (int)pc, (int)(pc + 1)); // ��ȣ�� ���� ����ε� ���� u
	printf(" %u %u %u\n", (int)(pi - 1), (int)pi, (int)(pi + 1)); // ��ȣ�� ���� ����ε� ���� u
	printf(" %u %u %u\n", (int)(pd - 1), (int)pd, (int)(pd + 1)); // ��ȣ�� ���� ����ε� ���� u

}
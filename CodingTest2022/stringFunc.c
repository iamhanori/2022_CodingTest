#include <stdio.h>

int main(void) {
	char s1[100] = "coding test";
	char s2[100];
	char s3[100];

	printf("s1�� ���ڿ��� ���� : %d\n", strlen(s1)); // ���ڿ��� ����

	strcpy(s2, s1); // ����
	printf("%s\n", s2);

	strcat(s2, s1); // ���� ���� > ������ ����
	printf("%s\n", s2);

	printf("%d\n", strcmp("high", "school")); // �� -1 ���� �� �۴� 
	printf("%d\n", strcmp("school", "high")); // �� 1 ���� �� ũ��
	printf("%d\n", strcmp("high", "high")); // �� 0 �� ���� ����
}
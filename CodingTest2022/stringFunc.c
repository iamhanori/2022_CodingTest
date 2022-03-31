#include <stdio.h>

int main(void) {
	char s1[100] = "coding test";
	char s2[100];
	char s3[100];

	printf("s1의 문자열의 길이 : %d\n", strlen(s1)); // 문자열의 길이

	strcpy(s2, s1); // 복사
	printf("%s\n", s2);

	strcat(s2, s1); // 결합 왼쪽 > 오른쪽 붙임
	printf("%s\n", s2);

	printf("%d\n", strcmp("high", "school")); // 비교 -1 값이 더 작다 
	printf("%d\n", strcmp("school", "high")); // 비교 1 값이 더 크다
	printf("%d\n", strcmp("high", "high")); // 비교 0 두 수가 같다
}
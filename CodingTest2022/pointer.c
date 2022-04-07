#include <stdio.h>

int main(void) {
	int number = 100;
	printf("number 주소 : %p 값 : %d\n", &number, number);
	
	int n = 5; // n이라는 변수 선언, 값 5 저장
	printf("n의 값 : %d\n", n); // 5 
	int* ptr = &n; // ptr n의 주소를 가리키는 포인터로 선언
	printf("n의 값 : %d\n", n); // 5
	*ptr = 10; // ptr이 가리키는 곳에 10을 넣어라
	// 즉, n의 값 5를 10으로 교체
	printf("n의 값 : %d\n", n); 

	return 0;
}
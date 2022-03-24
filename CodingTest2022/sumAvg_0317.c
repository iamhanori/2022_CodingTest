#include <stdio.h>
#include <time.h>

int main(void) {
	int arr[10];
	int i, sum = 0;
	double avg = 0;
	srand(time(NULL)); // (time 값) : 매번 뽑는 숫자가 다름

	// 배열에 정수 
	for (int i = 0; i < 10; i++) {
		arr[i] = (rand() % 100) + 1; // 단독 srand, rand > 랜덤값 추출 : 원래 뽑혀진 수
	} //sizeof(arr) / sizeof(int)

	for (int i = 0; i < 10; i++) {
		printf("%d	", arr[i]);
	}
	printf("\n");

	// 합
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	} 

	// 평균
	avg = (double)sum / 10;
	
	//출력
	printf("합 : %d\n", sum);
	printf("평균 : %lf\n", avg);
}

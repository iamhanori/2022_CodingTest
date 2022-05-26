#include <stdio.h>

// #을 20개 화면 출력하는 함수
void display(int length, char ch) {
	for (int i = 0; i < length; i++) {
		printf("%c", ch);
	}
}

// 짝수인지 홀수인지 판별 키보드 입력X
int isEven(int n) {
	return(n % 2 == 0 ? 1 : 0);
}



int main(void) {
	display(20, '#');
	if (isEevn(10) == 1){

		println("\n작");
}
	else{
		println("\n홀");
	}


	return 0;
}
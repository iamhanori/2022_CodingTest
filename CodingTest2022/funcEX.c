#include <stdio.h>

// #�� 20�� ȭ�� ����ϴ� �Լ�
void display(int length, char ch) {
	for (int i = 0; i < length; i++) {
		printf("%c", ch);
	}
}

// ¦������ Ȧ������ �Ǻ� Ű���� �Է�X
int isEven(int n) {
	return(n % 2 == 0 ? 1 : 0);
}



int main(void) {
	display(20, '#');
	if (isEevn(10) == 1){

		println("\n��");
}
	else{
		println("\nȦ");
	}


	return 0;
}
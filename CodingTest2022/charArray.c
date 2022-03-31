#include <stdio.h>

int main(void) {
	//char color[5][10] = { "red", "green", "blue", "brown", "cyan" };
	char s1[20] = { "coding test" };
	char s2[20];

	int i, j;
	int cnt = 0;

	// 길이 구하기
	//while (s1[cnt] != '\0') {
	//	cnt++;
	//}
	
	for (i = 0; i < 20; i++) {
		if (s2[i] == 0) {
			break;
		}

		s2[i] = s1[i]; 
		
		//if (s1[i] == 0) {
		//	break;
		//}
	}

	printf("복사본 : %s\n", s2);

	//while (s1[cnt] != '\0') { // 문자열 끝인 널문자가 나오기 전까지 반복
	//	cnt++;
	//}
	//printf("문자열의 길이 : %d\n", cnt);
	//
	//cnt = 0;
	//for (i = 0; i < 20; i++) {
	//	if (s1[i] == 0)
	//		break;
	//	cnt++;
	//}
	//printf("문자열의 길이 : %d\n", cnt);


	//for (i = 0; i < 5; i++) {
	//	printf("%s \n", color[i]);
	//	for (j = 0; j < 10; j++) {
	//		printf("%c ", color[i][j]);
	//	}
	//	printf("\n");
	//}
	return 0;
}
#include <stdio.h>

int main(void) {
	//char color[5][10] = { "red", "green", "blue", "brown", "cyan" };
	char s1[20] = { "coding test" };
	char s2[20];

	int i, j;
	int cnt = 0;

	// ���� ���ϱ�
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

	printf("���纻 : %s\n", s2);

	//while (s1[cnt] != '\0') { // ���ڿ� ���� �ι��ڰ� ������ ������ �ݺ�
	//	cnt++;
	//}
	//printf("���ڿ��� ���� : %d\n", cnt);
	//
	//cnt = 0;
	//for (i = 0; i < 20; i++) {
	//	if (s1[i] == 0)
	//		break;
	//	cnt++;
	//}
	//printf("���ڿ��� ���� : %d\n", cnt);


	//for (i = 0; i < 5; i++) {
	//	printf("%s \n", color[i]);
	//	for (j = 0; j < 10; j++) {
	//		printf("%c ", color[i][j]);
	//	}
	//	printf("\n");
	//}
	return 0;
}
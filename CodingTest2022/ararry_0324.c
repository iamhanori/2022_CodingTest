#include <stdio.h>
#include <time.h>

int main(void) {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // ����
	int i, key;
	key = (rand() % 10) + 1;
	srand(time(NULL));
	
	for (int i = 0; i < 10; i++) { // 1���� 10������ ���� ���� ����
		if (key == arr[i])
			break;
	}
	printf("ã�� �� :%d, ��ġ : %d", key, ++i);
}
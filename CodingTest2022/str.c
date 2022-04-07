#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[6][10] = { "한국", "미국", "일본", "영국", "독일", "호주" };
	char key[10] = "독일"; // 검색할 단어
	// 오름차순 (계단 올라간다 1->10)
	// 내림차순 (계단 올라간다 10->1)
	//1. strcmp("A", "B") A와 B가 같은 경우 = 0 // 사전순으로  문자열 비교
	// 사전 순으로(오른차순) A가 B보다 먼저 나올 경우 = 1
	// 사전 순으로(오름차순) A가 B보다 늦게 나올 경우 = -1

	for (int i = 0; i < 6; i++) {
		if (strcmp(s1[i], key[]) == 0) {
			printf("%d번째 찾는 값이 있습니다.\n", i + 1);
			break;
		}
	}

	return 0;
}
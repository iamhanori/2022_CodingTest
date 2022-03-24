#include <stdio.h>

int main (void) {
	int arr[] = { 2, 5, 78, 43, -45, 68, 31, 100, 45, 23 };
	int Max = 0;
	int Min = 0;
	int maxtemp = 0;
	int mintemp = 0;

	for (int i = 0; i < 10; i++) {
		if (arr[i] > Max) {
			Max = arr[i];
			maxtemp = i;
		}
		if (arr[i] < Min){
			Min = arr[i];
			mintemp = i;
	}
		
	printf("최대값 : %d 최솟값 : %d", Max, Min);
	printf("최대값위치 : %d 최솟값위치 : %d", maxtemp+1, mintemp+1);

	return 0;
}
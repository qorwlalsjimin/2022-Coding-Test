#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n=0, nPosition=0;
	n = rand()%10+1;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (arr[i] == n) nPosition = i;

	printf("%d는 %d번째 요소에 있습니다.", n, nPosition);
	return 0;
}
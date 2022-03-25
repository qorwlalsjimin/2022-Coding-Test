#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n, nPosition;
	do {
		printf("1~10 중 하나를 입력하시오. >> ");
		scanf_s("%d", &n);
	} while (n < 1 || n>10);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (arr[i] == n) nPosition = i;

	printf("%d는 %d번째 요소에 있습니다.", n, nPosition);
	return 0;
}
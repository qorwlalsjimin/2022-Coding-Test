#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n=0, i;
	srand(time(NULL));
	n = (rand()%20)+1;

	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (n == arr[i])
			break;

	if (n > 0 && n < 11)
		printf("%d�� %d��° ��ҿ� �ֽ��ϴ�.", n, ++i);
	else
		printf("%d ����� ã�� �� �����ϴ�.",n);
	return 0;
}
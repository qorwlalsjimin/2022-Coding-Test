#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("1~10���� �Է��Ͻÿ�. >> ");
	int n, nPosition;
	scanf_s("%d", &n);
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (arr[i] == n) nPosition = i;

	printf("%d�� %d��° ��ҿ� �ֽ��ϴ�.", n, nPosition);
	return 0;
}
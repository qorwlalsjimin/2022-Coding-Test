#include <stdio.h>
int main() {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int min = arr[0];
	int minPosition = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (min > arr[i]) {
			min = arr[i];
			minPosition = i; 
		}
	}

	printf("�ּҰ� : %d\n�ּҰ��� ��ġ : %d", min, ++minPosition);
	return 0;
}
#include <stdio.h>
int main() {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int max = 0;
	int maxPosition = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxPosition = i;
		}
	}

	printf("최대값 : %d\n최대값의 위치 : %d", max, ++maxPosition);
	return 0;
}
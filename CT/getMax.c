#include <stdio.h>
int main() {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int max = 0;
	int index = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}

	printf("�ִ밪 : %d\n�ִ밪�� ��ġ : arr[%d]", max, index);
	return 0;
}
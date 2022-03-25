#include <stdio.h>
#include <stdlib.h>
int main() {
	int list[10] = {0};
	int sum = 0;
	double avg;

	for (int i = 0; i < sizeof(list) / sizeof(int); i++)
		list[i] = rand() % 100 +1;

	for (int i = 0; i < sizeof(list) / sizeof(int); i++)
		sum += list[i];

	avg = (double)sum / (sizeof(list) / sizeof(int));

	for (int i = 0; i < sizeof(list) / sizeof(int); i++)
		printf("%d ", list[i]);

	printf("\nÇÕ°è: %d, Æò±Õ: %d", sum, avg);
	return 0;
}
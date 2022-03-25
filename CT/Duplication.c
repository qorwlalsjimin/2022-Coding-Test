#include <stdio.h>
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10];
	int i;

	for (i = 0; i < 10; i++)
		b[i] = a[i];
	//b=a 가 안 됨!
	//b가 뜻하는 것은 주소. a가 뜻하는 것은 주소
	//주소에 주소를 넣는다? 이상해!

	for (i = 0; i < 10; i++)
		printf("%d ", b[i]);

	return 0;
}
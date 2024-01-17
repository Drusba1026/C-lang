#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable:4996)

int add(int x, int y) {
	
	return x + y;
}

int minus(int x, int y) {

	return x - y;
}

int muitple(int x, int y) {

	return x * y;
}


void showIntArray(int x[10]) {

	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", x[i]);
	}
}

void swap(int* px, int* py) {

	int temp = 0;

	temp = *px;
	*px = *py;
	*py = temp;
}

void swapChar (char *px, char *py) {

	char temp;

	temp = *px;
	*px = *py;
	*py = temp;

}

int main() {

	int a, b, c;

	int d[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	char a1 = 'b';
	char a2 = 'c';

	a = add(10, 20);
	b = minus(10, 20);
	c = muitple(10, 20);

	printf("%d %d %d ", a, b, c);

	showIntArray(d);

	printf("\n a:%d / b:%d", a, b);
	swap(&a, &b);
	printf("\n a:%d / b:%d", a, b);

	printf("\n a1: %c // a2 : %c", a1, a2);
	swapChar(&a1, &a2);
	printf("\n a1: %c // a2 : %c", a1, a2);

	return 0;
}
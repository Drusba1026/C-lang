#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable:4996)

int main() {

	char coffee[3][20];
	
	int i;

	char* p[3];


	for (i = 0; i < sizeof(coffee)/sizeof(coffee[0]); i++)
	{
		printf("%d��° Ŀ�Ǹ޴��� ������ּ��� (���ڼ� 20���� ����) > ", i+1);

		gets(coffee[i]);

		p[i] = &coffee[i];
	}

	printf("�޴����� %s, %s, %s���� �����Ǿ����ϴ�", p[0], p[1], p[2]);

	return 0;
}
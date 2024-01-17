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
		printf("%d번째 커피메뉴를 등록해주세요 (글자수 20으로 제한) > ", i+1);

		gets(coffee[i]);

		p[i] = &coffee[i];
	}

	printf("메뉴판은 %s, %s, %s으로 설정되었습니다", p[0], p[1], p[2]);

	return 0;
}
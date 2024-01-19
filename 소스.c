#include <stdio.h> // printf / scanf 필수
#include <stdlib.h> // 동적할당 필수
#include <string.h> // 문자열 함수 필수

#pragma warning (disable:4996)

typedef struct bookStruct
{
	char bookname[20];
	char author[20];
	int price;
	int ISBN;
} book;

void raiseBookPrice(int* pPrice, int add);

void changeWritter(char* pAuthor, char* authorNewName);

double calAverage(int* pArr, int size);

int main() {

	/*
	book favorite = { "이방인" , "카뮈", 12000, 456};

	raiseBookPrice(&(favorite.price), 2000);

	changeWritter(&(favorite.author), "쇼펜하우어");

	printf("%d %s",favorite.price, favorite.author);

	*/

	// 1. 학생 수 입력 2. 동적인 배열 생성 3. 영어 점수 평균 구하기 


	int input = 0;

	printf("반의 학생수를 입력해주세요 > ");
	scanf("%d", &input);

	int* arr;
	arr = (int*) malloc(input * sizeof(int));  // (int *) 는 c++ 에서는 필수임

	int i;

	for (i = 0; i < input; i++)
	{
		printf("%d번째 학생의 영어점수를 입력하세요 > ", i+1);
		scanf("%d", &arr[i]);
	}


	double average = 0;

	average = calAverage(arr, input);

	printf("학생들의 영어점수 평균은 %lf입니다", average);

	free(arr);

	return 0;
}


void raiseBookPrice(int* pPrice, int add) 
{
	*pPrice += add;
}

void changeWritter(char* pAuthor, char *authorNewName)
{
	strcpy(pAuthor, authorNewName);
}

double calAverage(int* pArr, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += pArr[i];
	}

	return (double)sum / size;
}
#include <stdio.h> // printf / scanf �ʼ�
#include <stdlib.h> // �����Ҵ� �ʼ�
#include <string.h> // ���ڿ� �Լ� �ʼ�

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
	book favorite = { "�̹���" , "ī��", 12000, 456};

	raiseBookPrice(&(favorite.price), 2000);

	changeWritter(&(favorite.author), "�����Ͽ��");

	printf("%d %s",favorite.price, favorite.author);

	*/

	// 1. �л� �� �Է� 2. ������ �迭 ���� 3. ���� ���� ��� ���ϱ� 


	int input = 0;

	printf("���� �л����� �Է����ּ��� > ");
	scanf("%d", &input);

	int* arr;
	arr = (int*) malloc(input * sizeof(int));  // (int *) �� c++ ������ �ʼ���

	int i;

	for (i = 0; i < input; i++)
	{
		printf("%d��° �л��� ���������� �Է��ϼ��� > ", i+1);
		scanf("%d", &arr[i]);
	}


	double average = 0;

	average = calAverage(arr, input);

	printf("�л����� �������� ����� %lf�Դϴ�", average);

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
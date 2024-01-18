#include <stdio.h> // printf / scanf 필수
#include <stdlib.h> // 동적할당 필수
#include <string.h> // 문자열 함수 필수

#pragma warning (disable:4996)

double square(double n)
{
	return n * n;
}

int arraySum(int x[10])
{
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += x[i];
	}

	return sum;
}

typedef struct coffee {

	char name[10];
	int price;
	int shots;
} caf;



int arraySum2(int x[10], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += x[i];
	}

	return sum;
}

/*

struct coffee {
	
	char name[20];
	int price;
	double height;
	int shots;
};

*/

// 학생 구조체 이름, 학과, 학번

struct student {

	char name[10];
	char class[15];
	int id;

	struct coffee coffee;
};


void raiseCoffeePrice(caf* x, int price);



int main() {


	/*
	struct coffee a;
	a.price = 4000;
	strcpy(a.name, "americano");
	a.shots = 2;

	struct student b;
	strcpy(b.name, "강민욱");
	strcpy(b.class, "컴퓨터공학과");
	b.id = 2023081001;
	b.coffee = a;

	printf("이름:%s / 전공:%s / 커피:%s", b.name, b.class, b.coffee.name);

	*/

	/*
	int a[3] = { 1,2,3 };

	caf menu[3] = { {"americano", 4000, 1} , {"main", 5000, 2} , { "bonus", 2500, 1} };

	raiseCoffeePrice(&menu[0], 1000);
	raiseCoffeePrice(&menu[1], 500);
	raiseCoffeePrice(&menu[2], 700);


	for (int i = 0; i < 3; i++)
	{
		printf("메뉴이름: %s / 가격: %d / 샷 횟수: %d\n", menu[i].name, menu[i].price + 1000, menu[i].shots);
	}

	*/

	// dynamic_Allocation

	int num;
	printf("얼마나 생성하시겠습니까?");
	scanf("%d", &num);

	int* p;

	// malloc
	p = (int*)malloc(sizeof(int) * num);

	return 0;
}


void raiseCoffeePrice(caf* x, int price)
{
		(*x).price += price;
}
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//rand();
	//srand(time(NULL)); //난수 초기화
	//int num = rand() % 3 +1; //범위(0부터 시작)

	/*printf("난수 초기화 이전...\n");
	for (int i = 0; i < 10;i++)
		printf("%d ", rand() % 10);

	srand(time(NULL));
	printf("\n\n난수 초기화 이후...\n");
	for (int i = 0; i < 10;i++)
		printf("%d ", rand() % 10);*/

	//가위0 바위1 보2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("error");
	}*/

	/*srand(time(NULL));
	int i = rand() % 3;
	switch(i)
	{
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default:printf("error\n"); break;
	}*/

	/*int age;
	printf("age? : ");
	scanf_s("%d", &age);*/
	/*if (age >= 8 && age <= 13)
	{
		printf("초등학생\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생\n");
	}
	else if (age < 7)
	{
		printf("유아");
	}
	else
	{
		printf("성인\n");
	}*/
	/*switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("element"); break;
	case 14:
	case 15:
	case 16: printf("middle"); break;
	case 17:
	case 18:
	case 19: printf("high"); break;
	default: printf("adult");
		break;
	}*/

	//up&down
	srand(time(NULL));
	int num = rand() % 100 + 1;//1~100
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0) //1:참, 0:거짓
	{
		printf("chance %d\n", chance--);
		printf("answer : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN\n");
		}
		else if (answer < num)
		{
			printf("UP\n");
		}
		else if (answer == num)
		{
			printf("CORRECT!\n");
			break;
		}
		else
		{
			printf("ERROR\n");
		}

		if (chance == 0)
		{
			printf("남은 기회 없음");
			break;
		}
	}
		




	return 0;
}
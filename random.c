#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//rand();
	//srand(time(NULL)); //���� �ʱ�ȭ
	//int num = rand() % 3 +1; //����(0���� ����)

	/*printf("���� �ʱ�ȭ ����...\n");
	for (int i = 0; i < 10;i++)
		printf("%d ", rand() % 10);

	srand(time(NULL));
	printf("\n\n���� �ʱ�ȭ ����...\n");
	for (int i = 0; i < 10;i++)
		printf("%d ", rand() % 10);*/

	//����0 ����1 ��2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("error");
	}*/

	/*srand(time(NULL));
	int i = rand() % 3;
	switch(i)
	{
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	default:printf("error\n"); break;
	}*/

	/*int age;
	printf("age? : ");
	scanf_s("%d", &age);*/
	/*if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л�\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л�\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л�\n");
	}
	else if (age < 7)
	{
		printf("����");
	}
	else
	{
		printf("����\n");
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
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0) //1:��, 0:����
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
			printf("���� ��ȸ ����");
			break;
		}
	}
		




	return 0;
}
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

	srand(time(NULL));
	int i = rand() % 3;
	switch(i)
	{
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	default:printf("error\n"); break;
	}


	return 0;
}
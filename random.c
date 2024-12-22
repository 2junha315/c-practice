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

	srand(time(NULL));
	int i = rand() % 3;
	switch(i)
	{
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default:printf("error\n"); break;
	}


	return 0;
}
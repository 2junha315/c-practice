#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
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
			printf("DOWN\n\n");
		}
		else if (answer < num)
		{
			printf("UP\n\n");
		}
		else if (answer == num)
		{
			printf("CORRECT!\n\n");
			break;
		}
		else
		{
			printf("ERROR\n\n");
		}

		if (chance == 0)
		{
			printf("남은 기회 없음\n\n");
			break;
		}
	}

	return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	//문이 5개, 점점 어려운 수식 퀴즈
	//통과, 실패
	srand(time(NULL));
	int count = 0;
	
	for (int i = 1;i <= 5;i++)
	{
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		
		if (answer == -1)
		{
			printf("프로그램을 종료합니다.");
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			success();
			count++;
		}
		else
		{
			fail();
		}
	}
	printf("당신은 5개 중 %d개를 맞혔습니다!", count);

	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 9) + 1;
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n####### %d 번째 비밀번호 #######\n", level);
	printf("\n\n%d X %d = ?\n\n", num1, num2);
	printf("####################\n");
	printf("\n비밀번호를 입력하세요. (종료:-1)\n");
}
void success()
{
	printf("\n >> Good!");
}
void fail() 
{
	printf("\n >> FAIL!");
}

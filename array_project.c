#include <stdio.h>
#include <time.h>	
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int treatment = rand() % 4;//발모제 선택 (0-3)
	printf("\n\n === 자라나라 머리머리 게임 === \n\n");

	int cntShowBottle = 0;//이번 게임에 보여줄 병 갯수
	int prevCntShowBottle = 0;//앞 게임에 보여준 병 갯수
	//서로 보여주는 병 갯수 다르게 해서 정답률 향상(처음개 2 > 다음에 3개)

	//3번으 기회
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 };//4개의 병
		do {
			cntShowBottle = rand() % 2 + 2;//보여줄 병 갯수
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;
		printf(" > %d 번째 시도 : ", i);

		int isIncluded = 0;//보여줄 병 중에 발모제가 포함되었는지 여부
		
		//보여줄 병 종류 선택
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4;//0-3
			//아직 선택되지 않은 병이면, 선택처리
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isIncluded = 1;
				}
			}
			//이미 선택된 병 이면 중복이므로 다시 선택
			else
			{
				j--;
			}
		}

		//사용자에게 문제 표시
		for (int k = 0;k < 4;k++)
		{
			if (bottle[k] == 1)
			{
				printf("%d ", k + 1);
			}
		}
		printf("물약을 머리에 바릅니다\n\n");

		if (isIncluded == 1)
		{
			printf("성공");
		}
		else
		{
			printf("실패");
		}
		printf("\n계속하려면 아무키나 누르세요");
		getchar();
	}
	int answer;//사용자 입력값
	printf("\n\n발모제는 몇번 일까요?");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("정답");
	}
	else
	{
		printf("실패, 정답은 %d", treatment+1);
	}
	return 0;
}
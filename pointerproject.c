#include <stdio.h>
#include <time.h>

//물고기 6마리
//어항에 사는중 사막에서
//너무 덥고 건조해 물이 빨리 증발
//증발 전에 어항에 물 추가해서 살리기
//물고기 시간이 지날수록 커짐

int level;
int arrayfish[6];
int* cursor;//어느 물고기에게 물을 줄지

void initdata();
void printffishes();
void decreasewater(long elaspedtime);
int checkalive();

int main(void)
{
	long starttime = 0;//게임 시작시간
	long totalelapsedtime = 0;//총 경과 시간
	long prevelapsedtime = 0;//직전 경과 시간(최근에 물을 준 시간 간격)

	int num;//몇 번 어항에 물을 줄것인지, 사용자 입력
	initdata();

	cursor = arrayfish;//cursor[0] ...cursor[1]...
	
	starttime = clock();//현재 시간을 밀리초로 반환(1000분의 1초)
	while (1)
	{
		printffishes();
		printf("몇 번 어항에 물을 넣을까?\n");
		scanf_s("%d", &num);
		//입력값 체크
		if (num < 1 || num >6)
		{
			printf("ERROR\n\n");
			continue;
		}
		//총 경과 시간
		totalelapsedtime = (clock() - starttime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalelapsedtime);

		//직전에 물 준 시간(마지막으로 물 준 시간)이후로 흐른 시간
		prevelapsedtime = totalelapsedtime - prevelapsedtime;
		printf("최근 경과 시간 : %ld 초\n", prevelapsedtime);

		//어항의 물을 감소 (증발)
		decreasewater(prevelapsedtime);

		//사용자 선택 어항에 물을 준다
		//1. 어항의 물이 0 이면? 물을 주지 않는다...이미 사망처리
		if (cursor[num - 1] <= 0)
		{
			printf("%d번 물고기는 이미 사망\n", num);
		}
		//2. 어항의 물이 0이 아닌 경우? 물을 준다!! 100을 넘지 않는지 체크
		//현재 어항의 물 + 1 <=100인지 확인
		else if (cursor[num - 1] + 1 <= 100)
		{
			//물을 준다
			printf("%d번 어항에 물을 준다\n\n", num);
			cursor[num - 1] += 1;//cursor[num-1]=cursor[num-1]+1
		}
		//레벨업을 할 건지 확인(레벨업은 20초마다 한번씩)
		if (totalelapsedtime / 20 > level - 1)//
		{
			//레벨업
			level++;//level:1->level:2->...
			printf("*** 축 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n", level - 1, level);

			//최종 레벨 : 5
			if (level == 5)
			{
				printf("\n\n축하합니다. 최고레벨을 달성하였습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}
		//모든 물고기가 사망했는지 확인
		if (checkalive() == 0)
		{
			//물고기 모두 사망
			printf("모든 물고기가 죽었습니다.\n");
			exit();
		}
		else
		{
			//1개 살아있음
			printf("물고기가 살아있어요.\n");
		}
		prevelapsedtime = totalelapsedtime;

		//10초-> 15초 (5초 : prevelapsedtime->15초) -> 25초 (10초...?)
	}
	
	return 0;
}
void initdata()
{
	level = 1;//게임레벨 (1-5)
	for (int i= 0;i < 6;i++)
	{
		arrayfish[i] = 100;//어항의 물 높이 (0-100)
	}
}
void printffishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0;i < 6;i++)
	{
		printf("  %3d ", arrayfish[i]);
	}
	printf("\n\n");
}
void decreasewater(long elaspedtime)
{
	for (int i = 0;i < 6;i++)
	{
		arrayfish[i] -= (level * 3 * (int)elaspedtime);//3:난이도 조절 값
		if (arrayfish[i] < 0)
		{
			arrayfish[i] = 0;
		}
	}
}
int checkalive()
{
	for (int i = 0; i < 6;i++)
	{
		if (arrayfish[i] > 0)
			return 1;//참 true
	}
	return 0;
}
#include <stdio.h>

int main(void)
{
	//printf("hello world");
	/*int age;
	printf("age? : ");
	scanf_s("%d", &age);
	if (age >= 8 && age<=13)
	{
		printf("초등학생\n");
	}
	else if (age>=14 && age<=16)
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

//break, continue
	/*for (int i = 1;i <= 30;i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 귀가\n");
			break;
		}
		printf("%d까지 조별 발표 준비\n", i);
	}*/
	//for (int i = 1;i <= 30;i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if (i == 7)
	//		{
	//			printf("%d번은 결석\n", i);
	//			continue;
	//		}
	//		printf("%d번 학생은 조별 발표 준비\n", i);
	//	}
	//}

	//&& ||
	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b && c == d)
	{
		printf("a는 b와 같고, c는 d와 같다");
	}
	else
	{
		printf("값이 서로 다르다");
	}













	return 0;
}
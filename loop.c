#include <stdio.h>

int main(void)
{
	//printf("Hello World");

	//++

	/*int a = 10;
	printf("a is %d\n", a);
	a++;
	printf("a is %d\n", a);
	a++;
	printf("a is %d\n", a);*/

	//int b = 20;
	//printf("b is %d\n", b);
	//printf("b is %d\n", ++b);
	//printf("b is %d\n", b++);
	//printf("b is %d\n", b);

	/*int i = 1;
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);*/

	//반복문
	//for, while, do while

	//for(선언; 조건; 증감)
	/*for (int i = 1;i <= 10;i++)
	{
		printf("hello world %d\n", i);
	}*/

	//while(조건) { }
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("hello world %d\n", i++);
	//}

	//do while
	//do { } while ()
	/*int i = 1;
	do {
		printf("hello world %d\n", i++);
	} while (i <= 10);*/

	//이중 반복
	/*for (int i = 1; i <= 3;i++)
	{
		printf("1st : %d\n", i);

		for (int j = 1; j <= 5;j++)
		{
			printf("	2nd : %d\n", j);
		}
	}*/

	//9*9
	/*for (int i = 2;i <= 9;i++)
	{
		printf("%d단\n", i);
		for (int j = 1; j <= 9;j++)
		{
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}*/

	//***
	/*for (int i = 0;i < 5;i++)
	{
		for (int j = 0; j <= i;j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	for (int i = 0;i < 5;i++)
	{
		for (int j = i; j < 5-1;j++)
		{
			printf(" ");
		}
		for (int k = 0;k <= i;k++)
		{
			printf("*");
		}
		printf("\n");
	}






	return 0;
}
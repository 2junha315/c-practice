#include <stdio.h>

int main(void)
{
	//printf("hello world");
	/*int age;
	printf("age? : ");
	scanf_s("%d", &age);
	if (age >= 8 && age<=13)
	{
		printf("�ʵ��л�\n");
	}
	else if (age>=14 && age<=16)
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

//break, continue
	/*for (int i = 1;i <= 30;i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� �Ͱ�\n");
			break;
		}
		printf("%d���� ���� ��ǥ �غ�\n", i);
	}*/
	for (int i = 1;i <= 30;i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d���� �Ἦ\n", i);
				continue;
			}
			printf("%d�� �л��� ���� ��ǥ �غ�\n", i);
		}
	}













	return 0;
}
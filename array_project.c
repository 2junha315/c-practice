#include <stdio.h>
#include <time.h>	
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int treatment = rand() % 4;//�߸��� ���� (0-3)
	printf("\n\n === �ڶ󳪶� �Ӹ��Ӹ� ���� === \n\n");

	int cntShowBottle = 0;//�̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0;//�� ���ӿ� ������ �� ����
	//���� �����ִ� �� ���� �ٸ��� �ؼ� ����� ���(ó���� 2 > ������ 3��)

	//3���� ��ȸ
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 };//4���� ��
		do {
			cntShowBottle = rand() % 2 + 2;//������ �� ����
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;
		printf(" > %d ��° �õ� : ", i);

		int isIncluded = 0;//������ �� �߿� �߸����� ���ԵǾ����� ����
		
		//������ �� ���� ����
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4;//0-3
			//���� ���õ��� ���� ���̸�, ����ó��
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isIncluded = 1;
				}
			}
			//�̹� ���õ� �� �̸� �ߺ��̹Ƿ� �ٽ� ����
			else
			{
				j--;
			}
		}

		//����ڿ��� ���� ǥ��
		for (int k = 0;k < 4;k++)
		{
			if (bottle[k] == 1)
			{
				printf("%d ", k + 1);
			}
		}
		printf("������ �Ӹ��� �ٸ��ϴ�\n\n");

		if (isIncluded == 1)
		{
			printf("����");
		}
		else
		{
			printf("����");
		}
		printf("\n����Ϸ��� �ƹ�Ű�� ��������");
		getchar();
	}
	int answer;//����� �Է°�
	printf("\n\n�߸����� ��� �ϱ��?");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("����");
	}
	else
	{
		printf("����, ������ %d", treatment+1);
	}
	return 0;
}
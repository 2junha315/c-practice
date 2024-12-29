#include <stdio.h>
#include <time.h>

//����� 6����
//���׿� ����� �縷����
//�ʹ� ���� ������ ���� ���� ����
//���� ���� ���׿� �� �߰��ؼ� �츮��
//����� �ð��� �������� Ŀ��

int level;
int arrayfish[6];
int* cursor;//��� ����⿡�� ���� ����

void initdata();
void printffishes();
void decreasewater(long elaspedtime);
int checkalive();

int main(void)
{
	long starttime = 0;//���� ���۽ð�
	long totalelapsedtime = 0;//�� ��� �ð�
	long prevelapsedtime = 0;//���� ��� �ð�(�ֱٿ� ���� �� �ð� ����)

	int num;//�� �� ���׿� ���� �ٰ�����, ����� �Է�
	initdata();

	cursor = arrayfish;//cursor[0] ...cursor[1]...
	
	starttime = clock();//���� �ð��� �и��ʷ� ��ȯ(1000���� 1��)
	while (1)
	{
		printffishes();
		printf("�� �� ���׿� ���� ������?\n");
		scanf_s("%d", &num);
		//�Է°� üũ
		if (num < 1 || num >6)
		{
			printf("ERROR\n\n");
			continue;
		}
		//�� ��� �ð�
		totalelapsedtime = (clock() - starttime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n", totalelapsedtime);

		//������ �� �� �ð�(���������� �� �� �ð�)���ķ� �帥 �ð�
		prevelapsedtime = totalelapsedtime - prevelapsedtime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevelapsedtime);

		//������ ���� ���� (����)
		decreasewater(prevelapsedtime);

		//����� ���� ���׿� ���� �ش�
		//1. ������ ���� 0 �̸�? ���� ���� �ʴ´�...�̹� ���ó��
		if (cursor[num - 1] <= 0)
		{
			printf("%d�� ������ �̹� ���\n", num);
		}
		//2. ������ ���� 0�� �ƴ� ���? ���� �ش�!! 100�� ���� �ʴ��� üũ
		//���� ������ �� + 1 <=100���� Ȯ��
		else if (cursor[num - 1] + 1 <= 100)
		{
			//���� �ش�
			printf("%d�� ���׿� ���� �ش�\n\n", num);
			cursor[num - 1] += 1;//cursor[num-1]=cursor[num-1]+1
		}
		//�������� �� ���� Ȯ��(�������� 20�ʸ��� �ѹ���)
		if (totalelapsedtime / 20 > level - 1)//
		{
			//������
			level++;//level:1->level:2->...
			printf("*** �� ������! ���� %d �������� %d ������ ���׷��̵� ***\n\n", level - 1, level);

			//���� ���� : 5
			if (level == 5)
			{
				printf("\n\n�����մϴ�. �ְ����� �޼��Ͽ����ϴ�. ������ �����մϴ�.\n\n");
				exit(0);
			}
		}
		//��� ����Ⱑ ����ߴ��� Ȯ��
		if (checkalive() == 0)
		{
			//����� ��� ���
			printf("��� ����Ⱑ �׾����ϴ�.\n");
			exit();
		}
		else
		{
			//1�� �������
			printf("����Ⱑ ����־��.\n");
		}
		prevelapsedtime = totalelapsedtime;

		//10��-> 15�� (5�� : prevelapsedtime->15��) -> 25�� (10��...?)
	}
	
	return 0;
}
void initdata()
{
	level = 1;//���ӷ��� (1-5)
	for (int i= 0;i < 6;i++)
	{
		arrayfish[i] = 100;//������ �� ���� (0-100)
	}
}
void printffishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
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
		arrayfish[i] -= (level * 3 * (int)elaspedtime);//3:���̵� ���� ��
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
			return 1;//�� true
	}
	return 0;
}
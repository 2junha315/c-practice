#include <stdio.h>

int main(void)
{
	//�迭 - ���ӵ� ����, ������ ������ ����
	//int subway_1 = 30;//����ö 1ȣ���� 30��
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	//printf("����ö 2ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	//printf("����ö 2ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway_3);

	//[]������ ���� ���ÿ� � ����, ������� ���� �־����

	//int subway_array[3]; // [0] [1] [2]
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3;i++)
	//{
	//	printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i+1, subway_array[i]);
	//}

	//�� ���� ��� *���� �׻� �ʱ�ȭ�ϱ�!!!
	//int arr[10]; // = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//for (int i = 0;i < 10;i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//int arr[10] = { 1, 2 };//3��° �����ʹ� �ڵ����� '0'���� �ʱ�ȭ��
	//for (int i = 0;i < 10;i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//int arr[] = { 1,2 };//arr[2]

	/*float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0;i < 5;i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	//���� vs ���ڿ�
	/*char c = 'A';
	printf("%c\n", c);*/

	//���ڿ� ������ '��'�� �ǹ��ϴ� NULL���� '\0'�� ���ԵǾ���
	// ���ڿ� ���� ���ڼ����� +1�̾��� �Ѵٰ� ����!!!
	//char str[6] = "coding";// [c] [o] [d] [i] [n] [g] [\0]
	/*char str[] = "coding";*/
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));//7������ ����: �ڵ����� NULL���� �ν�

	/*for (int i = 0; i < sizeof(str);i++)
	{
		printf("%c\n", str[i]);
	}*/

	//char kor[] = "�����ڵ�";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));
	//���� �� ���� : 1byte
	//�ѱ� 1���� : 2byte
	//char ũ�� : 1byte

	/*char c_array[6] = { 'c','o', 'd', 'i', 'n', 'g'};
	printf("%s", c_array);*/

	//char c_array[10] = { 'c','o', 'd', 'i', 'n', 'g' };
	//printf("%s", c_array);
	/*for (int i = 0; i < sizeof(c_array);i++)
	{
		printf("%c\n", c_array[i]);
	}*/
	//for (int i = 0; i < sizeof(c_array);i++)
	//{
	//	printf("%d\n", c_array[i]);//ASCII �ڵ� �� ���(null ���� 0���� �Է�)
	//}

	//���ڿ� �Է¹ޱ�
	char name[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);

	//���� : ASCII �ڵ�? ANSI���� ������ ǥ�� �ڵ� ü��
	//7bit, �� 128�� �ڵ� (0-127)
	//a : 97 (���� a�� �ƽ�Ű�ڵ� ������)


	return 0;
}
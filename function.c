#include <stdio.h>

//����
void p(int num);
void function_without_return();
int fuction_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate);//total ���� ate �԰� ���� ���� 

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function(void)
{
//	/*printf("hello world");*/
//	int num = 2;
//	//printf("num is %d\n", num);
//	p(num);
//
//	num = num + 3;
//	//printf("num is %d\n", num);
//	p(num);
//
//	num -= 1;//num=num-1
//	//printf("num is %d\n", num);
//	p(num);
//
//	num *= 3;//num*3
//	//printf("num is %d\n", num);
//	p(num);
//
//	num /= 6;//num/6
//	//printf("num is %d\n", num);
//	p(num);
//
	//function_without_return();
	//int ret = fuction_with_return();
	//p(ret);
	//function_with_params(12, 23, 64);
	

	//���ް� ���� �Լ�


	//�Ѵ�
	//int ret = apple(5, 2); //��� 5�� �� 2�� ����
	//printf("��� 5���� 2���� ������ ��� ������? : %d", ret);
	//printf("��� %d�� �߿� %d���� ������? %d ���� ���ƿ�\n", 10, 4, apple(10, 4));

	//calcuate
	int num = 2;

	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 2);
	p(num);

	return 0;
}

//����
void p/*�̸�*/(int num)/*���ް�*/
{
	printf("num is %d\n", num);
}
void function_without_return()
{
	printf("function_without_return\n");
}
int fuction_with_return()
{
	printf("function_with_retun");
	return 10;
}
void function_without_params()
{
	printf("function_without_params\n");
}
void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ�, ���� ���� ���� %d, %d, %d\n", num1, num2, num3);
}
int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ�\n");
	return total - ate;
}
////int add(int num1, int num2)
//{
//	return num1 + num2;
//}
////int sub(int num1, int num2)
//{
//	return num1 - num2;
//}
////int mul(int num1, int num2)
//{
//	return num1 * num2;
//}
////int div(int num1, int num2)
//{
//	return num1 / num2;
//}
//��ȯ�� �Լ��̸�(���ް�){����}
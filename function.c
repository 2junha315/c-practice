#include <stdio.h>

//����
void p(int num);
void function_without_return();
int fuction_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int main(void)
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
	function_with_params(12, 23, 64);
	return 0;

	//���ް� ���� �Լ�
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

//��ȯ�� �Լ��̸�(���ް�){����}
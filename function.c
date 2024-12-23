#include <stdio.h>

//선언
void p(int num);
void function_without_return();
int fuction_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate);//total 에서 ate 먹고 남은 개수 

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
	

	//전달값 없는 함수


	//둘다
	//int ret = apple(5, 2); //사과 5개 중 2개 먹음
	//printf("사과 5개중 2개를 먹으면 몇개가 남나요? : %d", ret);
	//printf("사과 %d개 중에 %d개를 먹으면? %d 개가 남아요\n", 10, 4, apple(10, 4));

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

//정의
void p/*이름*/(int num)/*전달값*/
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
	printf("전달값이 있는 함수, 전달 받은 값은 %d, %d, %d\n", num1, num2, num3);
}
int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수\n");
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
//반환형 함수이름(전달값){동작}
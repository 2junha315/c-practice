#include <stdio.h>

//선언
void p(int num);

int main(void)
{
	/*printf("hello world");*/
	int num = 2;
	//printf("num is %d\n", num);
	p(num);

	num = num + 3;
	//printf("num is %d\n", num);
	p(num);

	num -= 1;//num=num-1
	//printf("num is %d\n", num);
	p(num);

	num *= 3;//num*3
	//printf("num is %d\n", num);
	p(num);

	num /= 6;//num/6
	//printf("num is %d\n", num);
	p(num);
















	return 0;
}

//정의
void p/*이름*/(int num)/*전달값*/
{
	printf("num is %d\n", num);
}
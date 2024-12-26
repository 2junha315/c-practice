#include <stdio.h>

int main(void)
{
	// 포인터

	//[철수] : 101호 -> 메모리 공간의 주소
	//[영희] : 201호
	//[민수] : 301호
	int 철수 = 1;
	int 영희 = 2;
	int 민수 = 3;

	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	// 미션맨!

	//1미션
	//아파트의 각 집에 방문, 문에 적힌 암호 확인
	int * 미션맨;//포인터 변수
	미션맨 = &철수;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	return 0;
}
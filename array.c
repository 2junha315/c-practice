#include <stdio.h>

int main(void)
{
	//배열 - 연속된 공간, 정수형 여러개 생성
	//int subway_1 = 30;//지하철 1호차에 30명
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway_1);
	//printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway_2);
	//printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway_3);

	//[]정수형 변수 동시에 몇개 생성, 상수값만 집어 넣어야함

	//int subway_array[3]; // [0] [1] [2]
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3;i++)
	//{
	//	printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i+1, subway_array[i]);
	//}

	//값 설정 방법 *값은 항상 초기화하기!!!
	//int arr[10]; // = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//for (int i = 0;i < 10;i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//int arr[10] = { 1, 2 };//3번째 값부터는 자동으로 '0'으로 초기화됨
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

	//문자 vs 문자열
	/*char c = 'A';
	printf("%c\n", c);*/

	//문자열 끝에는 '끝'을 의미하는 NULL문자 '\0'이 포함되야함
	// 문자열 사용시 문자수보다 +1이어햐 한다고 생각!!!
	//char str[6] = "coding";// [c] [o] [d] [i] [n] [g] [\0]
	/*char str[] = "coding";*/
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));//7나오는 이유: 자동으로 NULL문자 인식

	/*for (int i = 0; i < sizeof(str);i++)
	{
		printf("%c\n", str[i]);
	}*/

	//char kor[] = "나도코딩";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));
	//영어 한 글자 : 1byte
	//한글 1글자 : 2byte
	//char 크기 : 1byte

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
	//	printf("%d\n", c_array[i]);//ASCII 코드 값 출력(null 문자 0으로 입력)
	//}

	//문자열 입력받기
	char name[256];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);

	//참고 : ASCII 코드? ANSI에서 제시한 표준 코드 체계
	//7bit, 총 128개 코드 (0-127)
	//a : 97 (문자 a의 아스키코드 정수값)


	return 0;
}
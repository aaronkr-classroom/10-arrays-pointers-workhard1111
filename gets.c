//gets.c

#include <stdio.h>

#define MAX_CHAR 50

int main(void)
{
	//문자열은 마지막에 NULL 문자 0을 포함해야 하므로
	//최대 19개의 문자까지 저장 가능함
	char input_str[MAX_CHAR];

	printf("Enter your English name : ");

	gets(input_str); //문자열이 길으면 버퍼 오퍼플로우!!!
	fgets(input_str, MAX_CHAR, stdin); // fgets(입력받을 변수, 길이, 입력 스트림)

	printf("Name : %s\n", input_str);

	return 0;
}
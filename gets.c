//gets.c

#include <stdio.h>

#define MAX_CHAR 50

int main(void)
{
	//���ڿ��� �������� NULL ���� 0�� �����ؾ� �ϹǷ�
	//�ִ� 19���� ���ڱ��� ���� ������
	char input_str[MAX_CHAR];

	printf("Enter your English name : ");

	gets(input_str); //���ڿ��� ������ ���� �����÷ο�!!!
	fgets(input_str, MAX_CHAR, stdin); // fgets(�Է¹��� ����, ����, �Է� ��Ʈ��)

	printf("Name : %s\n", input_str);

	return 0;
}
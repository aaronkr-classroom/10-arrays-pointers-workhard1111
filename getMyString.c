//getMyString.c

#include <stdio.h>

#define MAX_CH 20

int getMyString(char buffer[], int limit);

int main(void)
{
	char input_string[MAX_CH];
	int state; //����ڿ��� �ִ� MAX_CH������ �Է� �ްڴٰ� ������

	state = getMyString(input_string, MAX_CH);
	
	if (state) printf("input : %s\n", input_string);
	else printf("input : %s -> out of range\n", input_string);

	return 0;
}

int getMyString(char buffer[], int limit)
{
	int i;
	for (int i = 0; i < limit; i++)
	{
		buffer[i] = getchar();
		if (buffer[i] == '\n' )
		{
			buffer[i] = 0; //[ENTER] Ű ��ġ�� 0�� �־ ���ڿ��� �ϼ���
			return 1; //���������� �Է��� �Ϸ��
		}
	}
	buffer[i] = 0;
	rewind[stdin];

}


void isCanceled(char input_string[])
{
	//��ȯ���� NULL�� �ƴ϶�� ���ڿ��� �Է�
	//�޾Ƽ� input_string�� ������
	if (NULL != getchar())
	{
		//getMyString()
		printf("input : %s\n", );
	}
	else
	{
		printf("input -> Canceled!\n");
	}
}
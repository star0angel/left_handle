#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//ȡ��scanf����ֵ�ľ���

#include<stdio.h>
#include <string.h>
#include <assert.h>

void left_move(char *arr,int n)
{
	int len = strlen(arr);
	assert(2*n<=len);
	char* first = arr;
	char* bew = &arr[len - n ];
	for (;n>0;n--)
	{
		char tmp = *first;
		*first = *bew;
		*bew = tmp;
		first++;
		bew++;
	}
}





//�����ַ���
int main()
{
	int input;
	char arr[] = "abcdefghijklmnopqrstuw";
	printf("������Ҫ���������ַ���>");
	int i=scanf("%d", &input);
	left_move(arr,input);//�������ܺ���

	printf(arr);
	

}
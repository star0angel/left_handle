#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告

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





//左旋字符串
int main()
{
	int input;
	char arr[] = "abcdefghijklmnopqrstuw";
	printf("输入你要左旋几个字符：>");
	int i=scanf("%d", &input);
	left_move(arr,input);//左旋功能函数

	printf(arr);
	

}
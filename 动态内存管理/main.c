#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define NUM 5


int main()
{
	/*int num = 0;
	scanf("%d", &num);
	int arr[num] = { 0 };*/

	int arr[NUM] = { 0 };

	int* ptr = NULL;
	
	//malloc函数只是开辟n个字节的空间，不会对其初始化

	ptr = (int*)malloc(NUM * sizeof(int));
	if (ptr != NULL)
	{
		int i = 0;
		for (i = 0; i < NUM; i++)
		{
			*(ptr + i) = i + 1;
		}
	}
	for (int i = 0; i < NUM; i++)
	{
		printf("%d ", *(ptr + i));
	}
	free(ptr);
	ptr = NULL;
	printf("\n");

	//calloc函数用于开辟n个大小为m（单位为字节）的连续空间，并且值初始化为0

	ptr = (int*)calloc(NUM, sizeof(int));
	if (ptr)
	{
		for (int i = 0; i < NUM; i++)
		{
			printf("%d ", *(ptr + i));
		}
	}
	//free(ptr);
	//ptr = NULL;
	printf("\n");

	//realloc函数用于调整  之前  使用   malloc函数或者calloc函数   开辟的空间 的大小
	int* ptr1 = (int*)realloc(ptr, NUM * 2 * sizeof(int));
	if (ptr1)
	{
		for (int i = 0; i < NUM * 2; i++)
		{
			printf("%d ", *(ptr1 + i));//多开辟出来的空间没有初始化
		}
	}
	printf("\n");

	free(ptr1);
	ptr = NULL;
	ptr1 = NULL;

	return 0;
}
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
	
	//malloc����ֻ�ǿ���n���ֽڵĿռ䣬��������ʼ��

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

	//calloc�������ڿ���n����СΪm����λΪ�ֽڣ��������ռ䣬����ֵ��ʼ��Ϊ0

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

	//realloc�������ڵ���  ֮ǰ  ʹ��   malloc��������calloc����   ���ٵĿռ� �Ĵ�С
	int* ptr1 = (int*)realloc(ptr, NUM * 2 * sizeof(int));
	if (ptr1)
	{
		for (int i = 0; i < NUM * 2; i++)
		{
			printf("%d ", *(ptr1 + i));//�࿪�ٳ����Ŀռ�û�г�ʼ��
		}
	}
	printf("\n");

	free(ptr1);
	ptr = NULL;
	ptr1 = NULL;

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define NUM 100

typedef struct arr
{
	int a;
	int b[0];
}Arr;

int main()
{
	int ret = sizeof(Arr);
	printf("%d\n", ret);//������������Ľṹ�Ĵ�С���������������Ա�Ĵ�С
	//���������ʹ��
	Arr* ptr = NULL;
	ptr = (Arr*)malloc(sizeof(int) + NUM * sizeof(int));
	ptr->a = 100;
	for (int i = 0; i < NUM; i++)
	{
		ptr->b[i] = i;
	}
	printf("%d\n", ptr->a);
	for (int i = 0; i < NUM; i++)
	{
		printf("%d\t", ptr->b[i]);
	}

	free(ptr);
	ptr = NULL;
	return 0;
}
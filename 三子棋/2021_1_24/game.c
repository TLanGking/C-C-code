#include <windows.h>
#define HIGH 3
#define WIDE 3
#define FIRST "��Ϸ�С�����������ʹ�á�W�����ϣ���S�����£���A�����󣩡�D�����ң������ƶ�"
#define PLAYER "��ʾ��������壡"
#define PC "��ʾ���������壡"


char ground[HIGH][WIDE];

//���̵Ĵ�ӡ
//�����ש��ש���
//��  ��  ��  ��
//�ǩ��贈�贈��
//��  ��  ��  ��
//�ǩ��贈�贈��
//��  ��  ��  �� 
//�����ߩ��ߩ���
//

void initground()
{
	int i, j;
	for (i = 0; i < HIGH; i++)
	{
		for (j = 0; j < WIDE; j++)
		{
			ground[i][j] = ' ';
		}
	}
}

void background()
{
	printf("%s\n��", FIRST);
	for (int i = 1; i < WIDE; i++)
	{
		printf("��������");
	}
	printf("��������\n��");
	for (int i = 0; i < WIDE; i++)
	{
		printf(" %c ��", ground[0][i]);
	}
	printf("\n��");
	for (int i = 1; i < HIGH; i++)
	{
		for (int j = 1; j < WIDE; j++)
		{
			printf("��������");
		}
		printf("��������\n��");
		for (int j = 0; j < WIDE; j++)
		{
			printf(" %c ��", ground[0][i]);
		}
		printf("\n");
		if (i == HIGH - 1)
		{
			break;
		}
		printf("��");
	}

	printf("��");

	for (int i = 1; i < WIDE; i++)
	{
		printf("��������");
	}

	printf("��������\n");
}


void Playgame()
{
	initground();
	do
	{
		system("cls");
		background();
		system("pause");

	} while (1);
}
void Gameset()
{
	printf("�����ڴ���\n");
}

void Moregame()
{
	system("start www.4399.com");
}
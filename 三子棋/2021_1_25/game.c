#include <windows.h>
//#include <conio.h>
#define HIGH 3
#define WIDE 3
#define FIRST "��Ϸ�С�����������ʹ�á�W�����ϣ���S�����£���A�����󣩡�D�����ң������ƶ�"
#define PLAYER "��ʾ��������壡"
#define PC "��ʾ���������壡"


char ground[WIDE][HIGH];
void initground();
void background();

//���̵Ĵ�ӡ
//�����ש��ש���
//��  ��  ��  ��
//�ǩ��贈�贈��
//��  ��  ��  ��
//�ǩ��贈�贈��
//��  ��  ��  �� 
//�����ߩ��ߩ���
//

void assignment(int wide, int high)
{
	if (ground[wide][high] == ' ')
	{
		ground[wide][high] = '$';
	}
}

void keymove()
{
	int wide = 0;
	int high = 0;
	//ground[wide][high] = '$';
	assignment(wide, high);
	background();
	while (1)
	{
		initground();
		char x = getch();
		if (x == 'w' || x == 'W')
		{
			if (high == 0)
			{
				high = HIGH - 1;
			}
			else
			{
				high--;
			}
		}
		else if (x == 's' || x == 'S')
		{
			if (high == HIGH - 1)
			{
				high = 0;
			}
			else
			{
				high++;
			}
		}
		else if (x == 'a' || x == 'A')
		{
			if (wide == 0)
			{
				wide = WIDE - 1;
			}
			else
			{
				wide--;			
			}
		}
		else if (x == 'd' || x == 'D')
		{
			if (wide == WIDE - 1)
			{
				wide = 0;
			}
			else
			{
				wide++;
			}
		}
		assignment(wide, high);
		system("cls");
		background();
		//		if (getchar() == '\n')
		//			break;
	}
}

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
	printf("%s\n\n\n\n\t\t\t��", FIRST);
	for (int i = 0; i < WIDE - 1; i++)
	{
		printf("��������");
	}
	printf("��������\n\t\t\t��");
	for (int i = 0; i < WIDE ; i++)
	{
		printf(" %c ��", ground[i][0]);
	}
	printf("\n\t\t\t��");
	for (int i = 1; i < HIGH; i++)
	{
		for (int j = 0; j < WIDE - 1; j++)
		{
			printf("��������");
		}
		printf("��������\n\t\t\t��");
		for (int j = 0; j < WIDE; j++)
		{
			printf(" %c ��", ground[j][i]);
		}
		printf("\n\t\t\t");
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

	printf("��������\n\t\t\t");
}


void Playgame()
{
	initground();
	do
	{
		system("cls");
		background();
		//system("pause");
		system("cls");
		keymove();
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
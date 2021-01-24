#include <windows.h>
#define HIGH 3
#define WIDE 3
#define FIRST "游戏中。。。。。。使用【W】（上）【S】（下）【A】（左）【D】（右）控制移动"
#define PLAYER "提示：玩家下棋！"
#define PC "提示：电脑下棋！"


char ground[HIGH][WIDE];

//棋盘的打印
//┏━┳━┳━┓
//┃  ┃  ┃  ┃
//┣━╋━╋━┫
//┃  ┃  ┃  ┃
//┣━╋━╋━┫
//┃  ┃  ┃  ┃ 
//┗━┻━┻━┛
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
	printf("%s\n┏", FIRST);
	for (int i = 1; i < WIDE; i++)
	{
		printf("━━━┳");
	}
	printf("━━━┓\n┃");
	for (int i = 0; i < WIDE; i++)
	{
		printf(" %c ┃", ground[0][i]);
	}
	printf("\n┣");
	for (int i = 1; i < HIGH; i++)
	{
		for (int j = 1; j < WIDE; j++)
		{
			printf("━━━╋");
		}
		printf("━━━┫\n┃");
		for (int j = 0; j < WIDE; j++)
		{
			printf(" %c ┃", ground[0][i]);
		}
		printf("\n");
		if (i == HIGH - 1)
		{
			break;
		}
		printf("┣");
	}

	printf("┗");

	for (int i = 1; i < WIDE; i++)
	{
		printf("━━━┻");
	}

	printf("━━━┛\n");
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
	printf("敬请期待！\n");
}

void Moregame()
{
	system("start www.4399.com");
}
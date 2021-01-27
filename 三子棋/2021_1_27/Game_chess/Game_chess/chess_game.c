#include "chess_date.h"

enum ROLE
{
	PC = 1,
	PLAYER = 2
};
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
	printf("┏");
	for (int i = 0; i < WIDE - 1; i++)
	{
		printf("━━━┳");
	}
	printf("━━━┓\n┃");
	for (int i = 0; i < WIDE; i++)
	{
		printf(" %c ┃", ground[i][0]);
	}
	printf("\n┣");
	for (int i = 1; i < HIGH; i++)
	{
		for (int j = 0; j < WIDE - 1; j++)
		{
			printf("━━━╋");
		}
		printf("━━━┫\n┃");
		for (int j = 0; j < WIDE; j++)
		{
			printf(" %c ┃", ground[j][i]);
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

int assignment(int wide, int high,int role)
{
	switch (role)
	{
	case PC:
		if (ground[wide][high] == ' ')
			ground[wide][high] = '@';
		else
			return 0;
		break;
	case PLAYER:
		if (ground[wide][high] == ' ')
			ground[wide][high] = '$';
		else
		{
			printf("此处已有棋子！\n");
			return 0;
		}
		break;
	}
}

void machine()
{
	srand((unsigned)time(NULL));
	int x = rand() % HIGH;
	int y = rand() % WIDE;
	if ((assignment(x, y, PC)) == 0)
		machine();
}

void Game()
{
	initground();
	background();
	do
	{
		int x, y;
		printf("请输入坐标：>");
		scanf_s("%d %d", &x, &y);
		if ((assignment(x - 1, y - 1, PLAYER)) == 0)
			continue;
		background();
		machine();
		background();
	} while (1);
}
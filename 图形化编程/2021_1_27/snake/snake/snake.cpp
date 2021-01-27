#include <graphics.h>
#include <stdio.h>
//����
typedef struct coordinates
{
	int x;
	int y;
}Point;
//�ߵ�����
struct Snake_attribute
{
	int  num;
	Point xy_s[100];
	char postion;
}_SNAKE;
//ʳ�������
struct Food_attribute
{
	int score;
	Point xy_f;
	int sign;
}_FOOD;
//����
enum direction
{
	RIGHT = 72,
	LEFT = 75,
	UP = 80,
	DOWN = 77
};
HWND hwnd = NULL; //��ʾ������

void initsnake();
void drawsnake();
void moveshake();
void keydown();
void initfood();
void drawfood();
void eatfood();
void snakedie();

int main()
{
	hwnd = initgraph(640,480);
	setbkcolor(WHITE);
	initsnake();
	drawsnake();
	cleardevice();
	getchar();
	return 0;
}

void initsnake()
{
	_SNAKE.xy_s[2].x = 0;
	_SNAKE.xy_s[2].y = 0;

	_SNAKE.xy_s[1].x = 10;
	_SNAKE.xy_s[1].y = 0;

	_SNAKE.xy_s[0].x = 20;
	_SNAKE.xy_s[0].y = 0;

	_SNAKE.num = 3;
	_SNAKE.postion = RIGHT;
}

void drawsnake()
{
	for (int i = 0; i < _SNAKE.num; i++)
	{
		setlinecolor(BLACK);
		setfillcolor(GREEN);
		fillrectangle(_SNAKE.xy_s[i].x, _SNAKE.xy_s[i].y, _SNAKE.xy_s[i].x + 10, _SNAKE.xy_s[i].y + 10);
	}
}
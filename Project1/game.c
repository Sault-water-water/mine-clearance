#define _CRT_SECURE_NO_WARNINGS 1	
#include"game.h"

void initboard(char board[RS][CS], int rs, int cs, char set)
{int i = 0;
int j = 0;
for (; i < rs; i++) {
	for (j = 0; j < cs; j++) {
		board[i][j]=set;
	}
}
}
void displayboard(char board[RS][CS], int rs, int cs)
{
	int i = 0;
	int j = 0;
	printf(" ");
	for (i = 1; i <= rs; i++)
		printf(" %d ", i);
	printf("\n");
	for (i = 1; i <= rs; i++) {
		printf("%d", i);
		for (j = 1; j <= cs; j++) {
			printf(" %c ", board[i][j]);
		}
		printf("\n");

		printf("\n");
	}
}
	void setmine(char board[RS][CS], int rs, int cs)
	{
		int count = lei;
		while (count) {
			int x = rand() % R + 1;
			int y = rand() % C + 1;
			if (board[x][y] == '0')
			{
				board[x][y] = '1';
				count--;
			}

		}
	}
	int getminecount(char mine[RS][CS], int x, int y) {
		    return mine[x - 1][y - 1] +
			mine[x - 1][y] +
			mine[x - 1][y + 1] +
			mine[x][y - 1] +
			mine[x][y + 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][y] +
			mine[x + 1][y + 1] - 8 * '0';
	}
	void findmine(char mine[RS][CS],char show[RS][CS], int rs, int cs) {
		int x = 0;
		int y = 0;
		int win = 0;
		while (win<R*C-lei) {
			printf("请输入坐标:\n");
			scanf("%d,%d", &x, &y);
			if (x >= 1 && x <= R && y >= 1 && y <= C) {
				if (mine[x][y] == '1') {
					printf("\n很遗憾,你的身体被雷管炸成了两半\n\n");
					displayboard(mine,R,C);
					break;
				}
				else {
					int count = getminecount(mine, x, y);
					show[x][y] = count + '0';
					displayboard(show, R, C);
					win++;
				}
			}
			else {
				printf("q");
			}
		}
		if (win == R * C - lei) {
			printf("恭喜你排雷成功\n");
		}


	}

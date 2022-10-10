#define _CRT_SECURE_NO_WARNINGS 1	
#define R 9
#define C 9
#define RS R+2 
#define CS C+2
#define lei 23
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initboard(char board[RS][CS],int rs, int cs,char set);
void displayboard(char board[RS][CS], int rs, int cs);
void setmine(char board[RS][CS], int rs,int cs);
void findmine(char mine[RS][CS], int rs, int cs);



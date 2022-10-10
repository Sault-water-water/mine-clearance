#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include"game.h"
void menu() {
	printf("***********************\n");
	printf("**      1.play       **\n");
	printf("**      0.exit       **\n");
	printf("***********************\n");
	

}
void game() {
	printf("É¨À×\n\n");
	char mine[RS][CS] = { 0 };
	char show[RS][CS] = { 0 };
	initboard(mine, RS, CS,'0');
	initboard(show, RS, CS,'*');
	//displayboard(mine, R, C);
	displayboard(show, R, C);
	setmine(mine, R, C);
	//displayboard(mine, R, C);
	//displayboard(show, R, C);
	findmine(mine, show, R, C);


}
void test() {
	char input=0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("ÇëÑ¡Ôñ(1/0):\n");
		scanf("%d", &input);
		switch ((unsigned int)input)
		{
		case 1:
			game();
			break;
		case0:
			break;
		default:
			break;
		}
	} while (input);




}
int main() {

	test();

	return 0;
}
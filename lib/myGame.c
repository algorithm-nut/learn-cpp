#include "myGame.h"
#include <stdio.h>

/*猜数游戏*/ 
void guessGame() 
{
	printf("开始猜数游戏(这个数在0~100之间)：\n");
	int number = 99;
    int guess, count = 0;
    while(1) {
        ++count;
        printf("猜数: ");
        scanf("%d", &guess);
        if(guess == number) {
            printf("猜了%d次，终于猜对了\n", count);
            break;
        }
        else if(guess < number)
            printf("\t再大一点!\n");
        else
            printf("\t再小一点!\n");
    }
}

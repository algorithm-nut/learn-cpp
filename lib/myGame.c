#include "myGame.h"
#include <stdio.h>

/*������Ϸ*/ 
void guessGame() 
{
	printf("��ʼ������Ϸ(�������0~100֮��)��\n");
	int number = 99;
    int guess, count = 0;
    while(1) {
        ++count;
        printf("����: ");
        scanf("%d", &guess);
        if(guess == number) {
            printf("����%d�Σ����ڲ¶���\n", count);
            break;
        }
        else if(guess < number)
            printf("\t�ٴ�һ��!\n");
        else
            printf("\t��Сһ��!\n");
    }
}

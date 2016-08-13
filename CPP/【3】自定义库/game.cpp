#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


/*猜数游戏*/ 
void initializeSeed(void) {
    srand(time(NULL));
}
int generateRandomNumber(int a, int b) {
    return a + rand() % (b - a + 1);
}
void readGuesses(int number) {
    int guess, count = 0;
    while(true) {
        ++count;
        cout << "输入你的猜数: ";
        cin >> guess;
        if(guess == number) {
            cout << "猜对了!猜了" << count << "次\n";
            break;
        }
        else if(guess < number)
            cout << "太小了!再大一点!\n";
        else
            cout << "太大了!再小一点!\n";
    }
}




#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


/*������Ϸ*/ 
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
        cout << "������Ĳ���: ";
        cin >> guess;
        if(guess == number) {
            cout << "�¶���!����" << count << "��\n";
            break;
        }
        else if(guess < number)
            cout << "̫С��!�ٴ�һ��!\n";
        else
            cout << "̫����!��Сһ��!\n";
    }
}




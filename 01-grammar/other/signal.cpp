#include <iostream>
#include <csignal>

using namespace std;

void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // �����ر�
    // ��ֹ����  

   exit(signum);  

}

int main ()
{
    // ע���ź� SIGINT ���źŴ������
    signal(SIGINT, signalHandler);  

    while(1){
       cout << "Going to sleep...." << endl;
       sleep(1);
    }

    return 0;
}



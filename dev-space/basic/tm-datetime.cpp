#include <iostream>
#include <ctime>

using namespace std;

int main()
{
   // ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
   time_t now = time(0);
   cout << now << endl;

   // ��� tm �ṹ�ĸ�����ɲ���
   tm *ltm = localtime(&now);

   cout << "Year: "<< 1900 + ltm->tm_year << endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: " << 1 + ltm->tm_hour << ":"
   				    << 1 + ltm->tm_min << ":"
                    << 1 + ltm->tm_sec << endl;
}

#include <iostream>
using namespace std;

// ��һ�������ռ�
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
   // �ڶ��������ռ�
   namespace second_space{
      void func(){
         cout << "Inside second_space" << endl;
      }
   }
}
using namespace first_space::second_space;
int main ()
{
 
   // ���õڶ��������ռ��еĺ���
   func();
   
   return 0;
}

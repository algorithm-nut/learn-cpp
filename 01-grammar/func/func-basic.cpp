#include <iostream>
using namespace std;
 
int sum(int a, int b=20)
{
  int result;

  result = a + b;

  return (result);
}

int main ()
{
   // �ֲ���������
   int a = 100;
   int b = 200;
   int result;
 
   // ���ú��������ֵ
   result = sum(a, b);
   cout << result << endl; // 300

   // �ٴε��ú���
   result = sum(a);
   cout << result << endl; // 120
 
   return 0;
}


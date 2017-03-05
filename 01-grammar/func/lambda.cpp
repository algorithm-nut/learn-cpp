#include <iostream>
using namespace std;

int main()
{
   
   auto func1 = [](int x, int y) -> int { int z = x + y; return z + x; };
   
   cout << func1(2, 3); // 7
   return 0;
}



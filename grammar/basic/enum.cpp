#include <iostream>
using namespace std;

int main()
{
   enum color { red, green=5, blue } c;
   c = blue;
   
   cout << c <<endl; // 6
   
   return 0;
}



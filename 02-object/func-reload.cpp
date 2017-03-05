#include <iostream>
#include <string> 
using namespace std;
 
class printData 
{
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }

      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }

		// 注意这里是指针 
//      void print(char* c) {
//        cout << "Printing character: " << c << endl;
//      }
      
      void print(string c) {
        cout << "Printing character: " << c << endl;
      }
      
      
      
};

int main(void)
{
   printData pd;
 
   pd.print(5);
   pd.print(500.263);
   pd.print("Hello C++");
 
   return 0;
}

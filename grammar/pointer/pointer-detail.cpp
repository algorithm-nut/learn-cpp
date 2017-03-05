#include <iostream>
using namespace std;

int main()
{
	int a = 9;
//    int *p = &a; 
    int *p = NULL; p = &a;
    
	cout << p << " : " << *p << endl;
	cout << &a << endl;
	cout << &p << endl;
	
	*p = 19;
	cout << a << endl; // µÇÌÃÈëÊÒ 
   
    return 0;
}



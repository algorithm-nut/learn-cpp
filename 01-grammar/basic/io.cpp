#include <iostream>
 
using namespace std;
 
int main( )
{
	// ��׼���� 
	char name[50];
	
	cin >> name;
	cout << " your name : "<< name << endl;
	
	// ��׼���� 
    char str[] = "Unable to read....";
    cerr << "Error message : " << str << endl;
    clog << "Error message : " << str << endl; // ��־ 
}

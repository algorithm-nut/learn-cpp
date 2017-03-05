#include <iostream>
 
using namespace std;
 
int main( )
{
	// 标准输入 
	char name[50];
	
	cin >> name;
	cout << " your name : "<< name << endl;
	
	// 标准错误 
    char str[] = "Unable to read....";
    cerr << "Error message : " << str << endl;
    clog << "Error message : " << str << endl; // 日志 
}

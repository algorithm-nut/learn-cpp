#include <fstream>
#include <iostream>
using namespace std;
 
int main ()
{
    // 声名 
   	char data[100];

   	// 以写模式打开文件
   	ofstream outfile;
   	outfile.open("afile.dat");

   	cout << "Enter your name: "; 
   	cin.getline(data, 100); // 存到变量 有多余 
   	outfile << data << endl; // 向文件写入用户输入的数据

   	cout << "Enter your age: "; 
   	cin >> data;
   	cin.ignore(); // 忽略掉之前读语句留下的多余字符。
   
   	
   	outfile << data << endl; // 再次向文件写入用户输入的数据
   	outfile.close(); // 关闭打开的文件

   	// 以读模式打开文件
   	ifstream infile; 
   	infile.open("afile.dat"); 
 
   	cout << "Reading from the file" << endl;
	    
	// 从文件读取数据，并显示它
   	infile >> data; 
   	cout << data << endl;
   
   	// 再次从文件读取数据，并显示它
   	infile >> data; 
   	cout << data << endl; 

   	infile.close(); // 关闭打开的文件

   	return 0;
}


#include <fstream>
#include <iostream>
using namespace std;
 
int main ()
{
    // ���� 
   	char data[100];

   	// ��дģʽ���ļ�
   	ofstream outfile;
   	outfile.open("afile.dat");

   	cout << "Enter your name: "; 
   	cin.getline(data, 100); // �浽���� �ж��� 
   	outfile << data << endl; // ���ļ�д���û����������

   	cout << "Enter your age: "; 
   	cin >> data;
   	cin.ignore(); // ���Ե�֮ǰ��������µĶ����ַ���
   
   	
   	outfile << data << endl; // �ٴ����ļ�д���û����������
   	outfile.close(); // �رմ򿪵��ļ�

   	// �Զ�ģʽ���ļ�
   	ifstream infile; 
   	infile.open("afile.dat"); 
 
   	cout << "Reading from the file" << endl;
	    
	// ���ļ���ȡ���ݣ�����ʾ��
   	infile >> data; 
   	cout << data << endl;
   
   	// �ٴδ��ļ���ȡ���ݣ�����ʾ��
   	infile >> data; 
   	cout << data << endl; 

   	infile.close(); // �رմ򿪵��ļ�

   	return 0;
}


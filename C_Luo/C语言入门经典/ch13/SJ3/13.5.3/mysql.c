#include<windows.h>
#include<mysql.h>
#include<stdio.h>
#include<stdlib.h>
void real_connect(MYSQL *mysql)
{
	char host[]="192.168.1.199";
	if(!mysql_real_connect(mysql,host,"root","123","db_test",0,NULL,0))
	{
		printf("Can not connect to db_test!\nPress any key to continue...\n");
		getchar();
		exit(0);
	}
	else
	{
		printf("Successfully connected to db_test!\n");  
	}
}
void delete_customer(MYSQL*mysql)
{
	char id[10];
	char *sql;
	char dest[100] ={" "};
	printf("������Ҫɾ���Ĺ˿�ID��\n");
	scanf("%s",id);
	sql = "delete from customer where id=";
	strcat(dest,sql);
	strcat(dest,id);    /*���˿ͱ��׷�ӵ�sql������*/
	if(mysql_query(mysql,dest))
	{
		printf("���ִ����޷�ɾ����\n");
	}
	else
	{
		printf("ɾ���ɹ���\n");
	}
}
main()
{
	MYSQL mysql;
	mysql_init(&mysql); 
	real_connect(&mysql);
	delete_customer(&mysql);
	mysql_close(&mysql); 
}

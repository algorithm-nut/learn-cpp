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
void query_customer(MYSQL*mysql)
{
	char id[10];
	char *sql;
	char dest[100] ={" "};
	MYSQL_RES *result;    //������������
	MYSQL_ROW row;        //�����б���
	printf("������Ҫ��ѯ�Ĺ˿�ID��\n");
	scanf("%s",id);
	sql = "select * from customer where id=";
	strcat(dest,sql);
	strcat(dest,id);    /*���˿ͱ��׷�ӵ�sql������*/
	if(mysql_query(mysql,dest))//�����ѯʧ��
	{   
		printf("\n ��ѯ customer ���ݱ�ʧ��!\n");
	}
	else
	{
		result=mysql_store_result(mysql); //��ý����
		if(mysql_num_rows(result)!=0)
		{
			printf("���\t����\t�绰\t\t����\t\t��ַ\n");
			while((row=mysql_fetch_row(result)))
			{
				printf("%s\t%s\t%s\t%s\t%s\n",row[0],row[1],row[2],row[3],row[4]);
			}
		}
		else
		{
			printf("û�в�ѯ����¼\n");
		}
		mysql_free_result(result);
	}
}
main()
{
	MYSQL mysql;
	mysql_init(&mysql); 
	real_connect(&mysql);
	query_customer(&mysql);
	mysql_close(&mysql); 
}

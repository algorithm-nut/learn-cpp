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
	MYSQL_RES *result;    //定义结果集变量
	MYSQL_ROW row;        //定义行变量
	printf("请输入要查询的顾客ID：\n");
	scanf("%s",id);
	sql = "select * from customer where id=";
	strcat(dest,sql);
	strcat(dest,id);    /*将顾客编号追加到sql语句后面*/
	if(mysql_query(mysql,dest))//如果查询失败
	{   
		printf("\n 查询 customer 数据表失败!\n");
	}
	else
	{
		result=mysql_store_result(mysql); //获得结果集
		if(mysql_num_rows(result)!=0)
		{
			printf("编号\t姓名\t电话\t\t邮箱\t\t地址\n");
			while((row=mysql_fetch_row(result)))
			{
				printf("%s\t%s\t%s\t%s\t%s\n",row[0],row[1],row[2],row[3],row[4]);
			}
		}
		else
		{
			printf("没有查询到记录\n");
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

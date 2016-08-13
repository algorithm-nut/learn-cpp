#include<windows.h>
#include<mysql.h>
#include<stdio.h>
#include<string.h>
void real_connect(MYSQL *mysql)				/*连接数据库*/
{
	char host[]="192.168.1.199";			/*主机*/
	if(!mysql_real_connect(mysql,host,"root","123","db_test",0,NULL,0))/*连接*/
	{
		printf("\tCan not connect to db_test!\nPress any key to continue...\n");
		getchar();
		exit(0);
	}
}
short check_person(MYSQL *mysql,char *id)	/*检查某身份证号表示的人是否存在*/
{
	short flag;								/*标志*/
	char sql[100]="select id from person where id='";
	MYSQL_RES *result;						/*结果集*/
	strcat(sql,id);
	strcat(sql,"';");
	if(mysql_query(mysql,sql))				/*执行查询语句，若执行失败则flag=0*/
	{
		flag=0;
	}
	else									/*执行成功*/
	{
		result=mysql_store_result(mysql);	/*获取结果集*/
		if(mysql_num_rows(result))			/*如果结果集不是空的，flag=1*/
		{
			flag=1;
		}
		else								/*如果结果集是空的,flag=0*/
		{
			flag=0;			
		}
	}
	mysql_free_result(result);				/*释放结果集*/
	return flag;							/*返回查询结果，0表示不存在或查询失败，1表示数据存在*/
}
short check_vehicle(MYSQL *mysql,char *card)	/*检查车牌为card的车是否已经存在于数据库中*/
{
	short flag;								/*标志*/
	char sql[100]="select card from vehicle where card='";
	MYSQL_RES *result;						/*结果集*/
	strcat(sql,card);
	strcat(sql,"';");
	if(mysql_query(mysql,sql))				/*执行查询语句，若执行flag=0*/
	{
		flag=0;
	}
	else
	{
		result=mysql_store_result(mysql);	/*获取结果集*/
		if(mysql_num_rows(result))			/*若结果集不为空则flag=1*/
		{
			flag=1;
		}
		else								/*若结果集为空则flag=0*/
		{
			flag=0;	
		}
	}
	mysql_free_result(result);				/*释放结果集*/
	return flag;							/*返回结果，0表示查询失败或不存在，1表示数据存在*/
}
void add_vehicle(MYSQL*mysql)
{
	char card[10];							/*保存车牌号*/
	char type[10];							/*保存车类型*/
	char owner[18];							/*保存车主身份证号*/
	char sql[100]="insert into vehicle(card,type,owner)values('";
	printf("\n\n");							/*显示添加车辆信息表头*/
	printf("\t═════════════════════════════ \n");
	printf("\t                     添 加 车 辆 信 息                     \n");
	printf("\t═════════════════════════════ \n");
	printf("\t请输入车牌号:");
	scanf("%s",card);
	printf("\t请输入车辆类型：");
	scanf("%s",type);
	printf("\t请输入车主身份证号：");
	scanf("%s",owner);
	if(check_person(mysql,owner))	/*检查车主是否合法存在*/
	{
		if(!check_vehicle(mysql,card))	/*检查车牌号是存在*/
		{
			strcat(sql,card);
			strcat(sql,"','");
			strcat(sql,type);
			strcat(sql,"','");
			strcat(sql,owner);
			strcat(sql,"');");
			if(mysql_query(mysql,sql))	/*执行插入语句*/
			{
				printf("\t操作失败。\n");
			}
			else
			{
				printf("\t操作成功。\n");
			}
		}
		else							/*若车牌号已经存在*/
		{
			printf("\t车牌号已经存在，请检查输入。\n");
		}
	}
	else								/*若车主身份证号不存在，则车主身份不合法*/
	{
		printf("\t该车主身份证号不合法，请检查输入。\n");
	}
}
void edit_vehicle(MYSQL *mysql) /*编辑车辆信息*/
{
	char card[10];
	char type[10];
	char owner[18];
	char sql[100]="update vehicle set type='";
	printf("\n\n");
	printf("\t═════════════════════════════ \n");
	printf("\t                     编 辑 车 辆 信 息                     \n");
	printf("\t═════════════════════════════ \n");
	printf("\t请输入车牌号：");
	scanf("%s",card);
	if(!check_vehicle(mysql,card))		/*检查车牌号是否存在*/
	{
		printf("\t该车牌号不存在，请检查输入。\n");
	}
	else								/*若车牌号存在*/
	{
		printf("\t请输入车辆的类型：");
		scanf("%s",type);
		printf("\t请输入车主身份证号：");
		scanf("%s",owner);
		if(check_person(mysql,owner))	/*检查新车主是否合法*/
		{
			strcat(sql,type);
			strcat(sql,"',");
			strcat(sql,"owner='");
			strcat(sql,owner);
			strcat(sql,"'");
			strcat(sql,"where card='");
			strcat(sql,card);
			strcat(sql,"';");
			if(mysql_query(mysql,sql))	/*执行update操作*/
			{
				printf("\t操作失败。\n");
			}
			else						/*执行成功*/
			{
				printf("\t操作成功。\n");
			}
		}
		else							/*车主身份不合法*/
		{
			printf("\t该车主身份证号不合法，请检查输入。\n");
		}
	}
}
void query_vehicle(MYSQL*mysql)	/*查询车辆信息，可以输入车牌号或车主身份证号*/
{
	char card[20];
	char sql1[100]="select * from vehicle where card='";
	char sql2[100]="select * from person where id='";
	MYSQL_RES *result1,*result2;
	MYSQL_ROW row1,row2;
	printf("\n\n");
	printf("\t═════════════════════════════ \n");
	printf("\t                     查 询 车 辆 信 息                     \n");
	printf("\t═════════════════════════════ \n");
	printf("\t请输入车牌号或车主身份证号:");
	scanf("%s",card);
	strcat(sql1,card);
	strcat(sql1,"' or owner='");
    strcat(sql1,card);
	strcat(sql1,"';");
	if(mysql_query(mysql,sql1))		/*执行查询操作*/
	{
		printf("\t查询失败。\n");
	}
	else							/*执行成功*/
	{
		result1=mysql_store_result(mysql);
		if(mysql_num_rows(result1)) /*如果不为空*/
		{
			row1=mysql_fetch_row(result1);
			strcat(sql2,row1[2]);
			strcat(sql2,"';");
			mysql_query(mysql,sql2); /*保存车主信息，一个车主可能有多辆车*/
			result2=mysql_store_result(mysql);
			row2=mysql_fetch_row(result2);
			mysql_query(mysql,sql1); /*查询车辆*/ 
			result1=mysql_store_result(mysql);
			while((row1=mysql_fetch_row(result1)))/*输出车辆信息*/
			{
				printf("\n\t车牌\t\t车辆类型\t车主\t车主身份证号\n");
				printf("\t---------------------------------------------------------- \n");
				printf("\t%s\t\t%s\t\t%s\t%s\n",row1[0],row1[1],row2[1],row2[0]);
				printf("\n\t出生日期\t\t省份\t\t城市\n");
				printf("\t---------------------------------------------------------- \n");
				printf("\t%s\t\t%s\t\t%s\n",row2[2],row2[3],row2[4]);
			}
			mysql_free_result(result2);				/*释放结果集*/
		}
		else								/*如果结果集为空表示不到信息*/
		{
			printf("\t未查询到该车的信息。\n");
		}
	}
	mysql_free_result(result1);				/*释放结果集*/
}
void delete_vehicle(MYSQL*mysql)
{
	char card[10];
	char sql[100]="delete from vehicle where card='";
	printf("\n\n");				/*显示删除车辆信息表头*/
	printf("\t═════════════════════════════ \n");
	printf("\t                     删 除 车 辆 信 息                     \n");
	printf("\t═════════════════════════════ \n");
	printf("\t请输入车牌号:");
	scanf("%s",card);
	if(check_vehicle(mysql,card))/*如果车牌号存在*/
	{
		strcat(sql,card);
		strcat(sql,"';");
		if(mysql_query(mysql,sql))/*执行删除操作*/
		{
			printf("\t删除失败。\n");
		}
		else
		{
			printf("\t删除成功。\n");
		}
	}
	else						/*车牌号不存在*/
	{
		printf("\t该车牌号不存在。\n");
	}
}
main()
{
	short cmd;
	short flag=1;
	MYSQL mysql;	
	mysql_init(&mysql);		/*初始化MYSQL结构体*/
	real_connect(&mysql);	/*连接数据库*/
	while(flag)
	{
		printf("\n\n");
		printf("\t╔═══════════════════════════╗\n");
		printf("\t║            欢 迎 使 用 车 辆 管 理 系 统             ║\n");
		printf("\t╠═══════════════════════════╣\n");
		printf("\t║                 1 - 添加车辆信息                     ║\n");
		printf("\t║                 2 - 查询车辆信息                     ║\n");
		printf("\t║                 3 - 修改车辆信息                     ║\n");
		printf("\t║                 4 - 删除车辆信息                     ║\n");
		printf("\t║                 0 -   退出程序                       ║\n");
		printf("\t╚═══════════════════════════╝\n");
		printf("                请 选 择(0-4):");
		scanf("%d",&cmd);/*输入选择功能的编号*/
		getchar();
		system("cls");	/*清屏*/
		switch(cmd)
		{
		case 1:			/*1表示添加车辆信息*/
			add_vehicle(&mysql);
			break;
		case 2:			/*2表示查询车辆信息*/
			query_vehicle(&mysql);
			break;
		case 3:			/*3表示修改车辆信息*/
			edit_vehicle(&mysql);
			break;
		case 4:			/*4表示删除车辆信息*/
			delete_vehicle(&mysql);
			break;
		default:		/*输入其他键值则退出程序*/
			flag=0;
			break;
		}
	}
	mysql_close(&mysql);/*关闭数据库连接*/
	return 0;
}
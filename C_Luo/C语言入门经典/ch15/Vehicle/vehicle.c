#include<windows.h>
#include<mysql.h>
#include<stdio.h>
#include<string.h>
void real_connect(MYSQL *mysql)				/*�������ݿ�*/
{
	char host[]="192.168.1.199";			/*����*/
	if(!mysql_real_connect(mysql,host,"root","123","db_test",0,NULL,0))/*����*/
	{
		printf("\tCan not connect to db_test!\nPress any key to continue...\n");
		getchar();
		exit(0);
	}
}
short check_person(MYSQL *mysql,char *id)	/*���ĳ���֤�ű�ʾ�����Ƿ����*/
{
	short flag;								/*��־*/
	char sql[100]="select id from person where id='";
	MYSQL_RES *result;						/*�����*/
	strcat(sql,id);
	strcat(sql,"';");
	if(mysql_query(mysql,sql))				/*ִ�в�ѯ��䣬��ִ��ʧ����flag=0*/
	{
		flag=0;
	}
	else									/*ִ�гɹ�*/
	{
		result=mysql_store_result(mysql);	/*��ȡ�����*/
		if(mysql_num_rows(result))			/*�����������ǿյģ�flag=1*/
		{
			flag=1;
		}
		else								/*���������ǿյ�,flag=0*/
		{
			flag=0;			
		}
	}
	mysql_free_result(result);				/*�ͷŽ����*/
	return flag;							/*���ز�ѯ�����0��ʾ�����ڻ��ѯʧ�ܣ�1��ʾ���ݴ���*/
}
short check_vehicle(MYSQL *mysql,char *card)	/*��鳵��Ϊcard�ĳ��Ƿ��Ѿ����������ݿ���*/
{
	short flag;								/*��־*/
	char sql[100]="select card from vehicle where card='";
	MYSQL_RES *result;						/*�����*/
	strcat(sql,card);
	strcat(sql,"';");
	if(mysql_query(mysql,sql))				/*ִ�в�ѯ��䣬��ִ��flag=0*/
	{
		flag=0;
	}
	else
	{
		result=mysql_store_result(mysql);	/*��ȡ�����*/
		if(mysql_num_rows(result))			/*���������Ϊ����flag=1*/
		{
			flag=1;
		}
		else								/*�������Ϊ����flag=0*/
		{
			flag=0;	
		}
	}
	mysql_free_result(result);				/*�ͷŽ����*/
	return flag;							/*���ؽ����0��ʾ��ѯʧ�ܻ򲻴��ڣ�1��ʾ���ݴ���*/
}
void add_vehicle(MYSQL*mysql)
{
	char card[10];							/*���泵�ƺ�*/
	char type[10];							/*���泵����*/
	char owner[18];							/*���泵�����֤��*/
	char sql[100]="insert into vehicle(card,type,owner)values('";
	printf("\n\n");							/*��ʾ��ӳ�����Ϣ��ͷ*/
	printf("\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
	printf("\t                     �� �� �� �� �� Ϣ                     \n");
	printf("\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
	printf("\t�����복�ƺ�:");
	scanf("%s",card);
	printf("\t�����복�����ͣ�");
	scanf("%s",type);
	printf("\t�����복�����֤�ţ�");
	scanf("%s",owner);
	if(check_person(mysql,owner))	/*��鳵���Ƿ�Ϸ�����*/
	{
		if(!check_vehicle(mysql,card))	/*��鳵�ƺ��Ǵ���*/
		{
			strcat(sql,card);
			strcat(sql,"','");
			strcat(sql,type);
			strcat(sql,"','");
			strcat(sql,owner);
			strcat(sql,"');");
			if(mysql_query(mysql,sql))	/*ִ�в������*/
			{
				printf("\t����ʧ�ܡ�\n");
			}
			else
			{
				printf("\t�����ɹ���\n");
			}
		}
		else							/*�����ƺ��Ѿ�����*/
		{
			printf("\t���ƺ��Ѿ����ڣ��������롣\n");
		}
	}
	else								/*���������֤�Ų����ڣ�������ݲ��Ϸ�*/
	{
		printf("\t�ó������֤�Ų��Ϸ����������롣\n");
	}
}
void edit_vehicle(MYSQL *mysql) /*�༭������Ϣ*/
{
	char card[10];
	char type[10];
	char owner[18];
	char sql[100]="update vehicle set type='";
	printf("\n\n");
	printf("\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
	printf("\t                     �� �� �� �� �� Ϣ                     \n");
	printf("\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
	printf("\t�����복�ƺţ�");
	scanf("%s",card);
	if(!check_vehicle(mysql,card))		/*��鳵�ƺ��Ƿ����*/
	{
		printf("\t�ó��ƺŲ����ڣ��������롣\n");
	}
	else								/*�����ƺŴ���*/
	{
		printf("\t�����복�������ͣ�");
		scanf("%s",type);
		printf("\t�����복�����֤�ţ�");
		scanf("%s",owner);
		if(check_person(mysql,owner))	/*����³����Ƿ�Ϸ�*/
		{
			strcat(sql,type);
			strcat(sql,"',");
			strcat(sql,"owner='");
			strcat(sql,owner);
			strcat(sql,"'");
			strcat(sql,"where card='");
			strcat(sql,card);
			strcat(sql,"';");
			if(mysql_query(mysql,sql))	/*ִ��update����*/
			{
				printf("\t����ʧ�ܡ�\n");
			}
			else						/*ִ�гɹ�*/
			{
				printf("\t�����ɹ���\n");
			}
		}
		else							/*������ݲ��Ϸ�*/
		{
			printf("\t�ó������֤�Ų��Ϸ����������롣\n");
		}
	}
}
void query_vehicle(MYSQL*mysql)	/*��ѯ������Ϣ���������복�ƺŻ������֤��*/
{
	char card[20];
	char sql1[100]="select * from vehicle where card='";
	char sql2[100]="select * from person where id='";
	MYSQL_RES *result1,*result2;
	MYSQL_ROW row1,row2;
	printf("\n\n");
	printf("\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
	printf("\t                     �� ѯ �� �� �� Ϣ                     \n");
	printf("\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
	printf("\t�����복�ƺŻ������֤��:");
	scanf("%s",card);
	strcat(sql1,card);
	strcat(sql1,"' or owner='");
    strcat(sql1,card);
	strcat(sql1,"';");
	if(mysql_query(mysql,sql1))		/*ִ�в�ѯ����*/
	{
		printf("\t��ѯʧ�ܡ�\n");
	}
	else							/*ִ�гɹ�*/
	{
		result1=mysql_store_result(mysql);
		if(mysql_num_rows(result1)) /*�����Ϊ��*/
		{
			row1=mysql_fetch_row(result1);
			strcat(sql2,row1[2]);
			strcat(sql2,"';");
			mysql_query(mysql,sql2); /*���泵����Ϣ��һ�����������ж�����*/
			result2=mysql_store_result(mysql);
			row2=mysql_fetch_row(result2);
			mysql_query(mysql,sql1); /*��ѯ����*/ 
			result1=mysql_store_result(mysql);
			while((row1=mysql_fetch_row(result1)))/*���������Ϣ*/
			{
				printf("\n\t����\t\t��������\t����\t�������֤��\n");
				printf("\t---------------------------------------------------------- \n");
				printf("\t%s\t\t%s\t\t%s\t%s\n",row1[0],row1[1],row2[1],row2[0]);
				printf("\n\t��������\t\tʡ��\t\t����\n");
				printf("\t---------------------------------------------------------- \n");
				printf("\t%s\t\t%s\t\t%s\n",row2[2],row2[3],row2[4]);
			}
			mysql_free_result(result2);				/*�ͷŽ����*/
		}
		else								/*��������Ϊ�ձ�ʾ������Ϣ*/
		{
			printf("\tδ��ѯ���ó�����Ϣ��\n");
		}
	}
	mysql_free_result(result1);				/*�ͷŽ����*/
}
void delete_vehicle(MYSQL*mysql)
{
	char card[10];
	char sql[100]="delete from vehicle where card='";
	printf("\n\n");				/*��ʾɾ��������Ϣ��ͷ*/
	printf("\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
	printf("\t                     ɾ �� �� �� �� Ϣ                     \n");
	printf("\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
	printf("\t�����복�ƺ�:");
	scanf("%s",card);
	if(check_vehicle(mysql,card))/*������ƺŴ���*/
	{
		strcat(sql,card);
		strcat(sql,"';");
		if(mysql_query(mysql,sql))/*ִ��ɾ������*/
		{
			printf("\tɾ��ʧ�ܡ�\n");
		}
		else
		{
			printf("\tɾ���ɹ���\n");
		}
	}
	else						/*���ƺŲ�����*/
	{
		printf("\t�ó��ƺŲ����ڡ�\n");
	}
}
main()
{
	short cmd;
	short flag=1;
	MYSQL mysql;	
	mysql_init(&mysql);		/*��ʼ��MYSQL�ṹ��*/
	real_connect(&mysql);	/*�������ݿ�*/
	while(flag)
	{
		printf("\n\n");
		printf("\t�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
		printf("\t�U            �� ӭ ʹ �� �� �� �� �� ϵ ͳ             �U\n");
		printf("\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
		printf("\t�U                 1 - ��ӳ�����Ϣ                     �U\n");
		printf("\t�U                 2 - ��ѯ������Ϣ                     �U\n");
		printf("\t�U                 3 - �޸ĳ�����Ϣ                     �U\n");
		printf("\t�U                 4 - ɾ��������Ϣ                     �U\n");
		printf("\t�U                 0 -   �˳�����                       �U\n");
		printf("\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		printf("                �� ѡ ��(0-4):");
		scanf("%d",&cmd);/*����ѡ���ܵı��*/
		getchar();
		system("cls");	/*����*/
		switch(cmd)
		{
		case 1:			/*1��ʾ��ӳ�����Ϣ*/
			add_vehicle(&mysql);
			break;
		case 2:			/*2��ʾ��ѯ������Ϣ*/
			query_vehicle(&mysql);
			break;
		case 3:			/*3��ʾ�޸ĳ�����Ϣ*/
			edit_vehicle(&mysql);
			break;
		case 4:			/*4��ʾɾ��������Ϣ*/
			delete_vehicle(&mysql);
			break;
		default:		/*����������ֵ���˳�����*/
			flag=0;
			break;
		}
	}
	mysql_close(&mysql);/*�ر����ݿ�����*/
	return 0;
}
#include<stdio.h>
struct Score
{
	float qizhong;
	float qimo;
	float qijian;
}score;
main()
{
	float zonghe; 
	printf("������ѧ���ɼ������гɼ�����ĩ�ɼ����ڼ�ɼ���:\n");
	scanf("%f,%f,%f",&score.qizhong,&score.qimo,&score.qijian);
	zonghe=(float)(score.qizhong*0.3+score.qimo*0.5+score.qijian*0.2);
	printf("�ۺϳɼ�:%3.2f\n",zonghe);
}
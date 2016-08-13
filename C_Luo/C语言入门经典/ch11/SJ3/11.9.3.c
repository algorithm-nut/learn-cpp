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
	printf("请输入学生成绩（期中成绩，期末成绩和期间成绩）:\n");
	scanf("%f,%f,%f",&score.qizhong,&score.qimo,&score.qijian);
	zonghe=(float)(score.qizhong*0.3+score.qimo*0.5+score.qijian*0.2);
	printf("综合成绩:%3.2f\n",zonghe);
}
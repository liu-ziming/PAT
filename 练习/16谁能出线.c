// 17 - 谁能出现
//结构体  排序
#include <stdio.h>
#include<stdlib.h>
typedef struct student
{
	int num;
	int score;
	
 }Student;
 cmp(const void *a,const void *b)
 {
 	struct student *aa=(struct student *)a;
 	struct student *bb=(struct student *)b;
 	return (aa->score>bb->score?1:-1);
 }
 int main()
 {
 	Student stu[15];
 	int i;
 	for(i=0;i<10;i++)
 	{
 		stu[i].num=i;
		scanf("%d",&stu[i].score);
	 }
 	qsort(stu,10,sizeof(stu[0]),cmp);
 	int max =stu[9].score;
 	for(i=0;i<10;i++)
 	    if(stu[i].score==max)
 	        printf("%d\n",stu[i].num);
 	
 }

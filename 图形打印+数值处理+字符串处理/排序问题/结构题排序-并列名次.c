/*
3-12. 编程，按学生的序号输入10名学生的成绩，按照分数由高到低的顺序输出学生的名次、序号和成绩，要求成绩相同的学生具有相同的名次。
*/ 
#include<stdio.h>

struct student
{
	int no;
	int score;
	int sortno;
 }stu[10],student;
int main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		stu[i].no=i+1;
		scanf("%d",&stu[i].score);
	}
	for(i=0;i<9;i++)//排序 
	     for(j=i+1;j<10;j++)
	     {
	     	int temp;
	     	if(stu[i].score>stu[j].score)
	     	{
	     		temp=stu[j].score;stu[j].score=stu[i].score;stu[i].score=temp;
			 }
		 }
	stu[0].sortno=1;
	int num=2;
	for(i=1;i<10;i++)  //名词并列 
	{
		if(stu[i].score==stu[i-1].score )  stu[i].sortno=stu[i-1].sortno;
		else stu[i].sortno=num++;
	}
	for(i=0;i<10;i++)
	    printf("%d %d\n",stu[i].sortno,stu[i].score);
	
 } 


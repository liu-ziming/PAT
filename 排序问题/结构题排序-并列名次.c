/*
3-12. ��̣���ѧ�����������10��ѧ���ĳɼ������շ����ɸߵ��͵�˳�����ѧ�������Ρ���źͳɼ���Ҫ��ɼ���ͬ��ѧ��������ͬ�����Ρ�
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
	for(i=0;i<9;i++)//���� 
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
	for(i=1;i<10;i++)  //���ʲ��� 
	{
		if(stu[i].score==stu[i-1].score )  stu[i].sortno=stu[i-1].sortno;
		else stu[i].sortno=num++;
	}
	for(i=0;i<10;i++)
	    printf("%d %d\n",stu[i].sortno,stu[i].score);
	
 } 


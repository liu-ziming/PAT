//1004 . 成绩排名（20）

#include <stdio.h>
#include <stdlib.h>


typedef struct{
	char name[11];
	char number[11];
	int  score;
}Student;

int cmp(const void * stu1,const void * stu2)
{
	Student* stu11 = (Student*)stu1;
	Student* stu22 = (Student*)stu2;
	return (stu11->score>stu22->score?1:-1);
}

int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	Student stu[n+1];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %s %d",stu[i].name,stu[i].number,&stu[i].score);
	}
	qsort(stu,n,sizeof(stu[0]),cmp);
	
	printf("%s %s\n",stu[n-1].name,stu[n-1].number);    //注意输出格式！！！题目里没有输出分数 
	printf("%s %s\n",stu[0].name,stu[0].number);
	
	
 } 

/*

1/根据输入日期 年月日 ，求出这天是改年的第几天
2/根据输入的年份和天数，求日期
*/

#include <stdio.h>

int daytab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
struct date
{
	int year;
	int month;
	int day;
}dt;

int day_of_year(int year ,int month,int day)
{
	int leap = (year%4==0&&year%100!=0||year%400==0);  //是闰年则leap为1
	int i;
	for ( i = 0; i < month; ++i)
	{
		day=day + daytab[leap][i];

	}
	return day;
}

int month_day(int year,int yeardays,int *pmonth,int *pday)
{
	int leap = (year%4==0&&year%100!=0||year%400==0);  //是闰年则leap为1
    int i;
    for(i=0;yeardays>daytab[leap][i];++i)
    	yeardays-=daytab[leap][i];
    *pmonth = i;
    *pday   = yeardays;
}


int main()
{
    int k;//K起到问题选择菜单的作用
    int yeardays;
    
    printf("k=1选择问题一\nk=2选择问题二\n");
    scanf("%d",&k);
    if(k==1)
    {
         printf("输入（年月日）\n");
         scanf("%d%d%d",&dt.year,&dt.month,&dt.day);
        printf("这是今年的第%d天\n",day_of_year(dt.year,dt.month,dt.day) );
    }
    if(k==2)
    {
    	printf("输入年和天数\n");
    	scanf("%d%d",&dt.year,&yeardays);
    	month_day(dt.year,yeardays,&dt.month,&dt.day);
    	printf("今天是%d年%d月%d日\n",dt.year,dt.month,dt.day );
    }
    
}

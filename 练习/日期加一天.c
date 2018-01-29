/*

2-.编写一个日期类，要求按 xxxx-xx-xx 的格式输出日 期，实现加一天的操作，不考虑闰年问题，所有月份 设为 30 天。本题黑盒测试时，输入 2004 年 3 月 20 日，得到加一天后时间为 2004-3-21 ，能得一部分分 数。输入 2004 年 3 月 30 日，得到加一天后时间为 2004-4-1，能得一部分分数。输入 2004 年 12 月 30 日，得到加一天后时间为 2005-1-1 ，且有时间越界 处理,能得全部分数。本题满分 30。

*/

#include <stdio.h>
#include <string.h>

int main()
{
	int year,month,day;
	scanf("%d-%d-%d",&year,&month,&day);
	if(day>30||day<0||month>12||month<0)
	{
		printf("erro");
		return ;
	}
	else
	{
		day++;
		if(day==31)
		{
			month++;
			day=1;
		}
		if(month==13)
		{
			month=1;
			year++;
		}	
	}
	
	printf("%d年%d月%d日",year,month,day);	
}




 

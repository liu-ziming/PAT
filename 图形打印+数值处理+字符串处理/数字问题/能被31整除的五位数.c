/*
 2-10. 编程，输出所有个位数为6且能被31整除的五位数及其个数。

/*/ 
#include<stdio.h>
#include<math.h>
void main()
{
	int count=0,i;
	for(i=10006;i<=99999;i=i+10)
	{
		if(i%10==6&&i%31==0)
		{
			printf("%d\n ",i);
			count++;
		}
		
	}
	printf("个数：%d",count);
 } 

/*
2- 请编写一个程序，从键盘上输入 n（n 的范围是 1～20） ，求 n 的阶乘。 

*/

#include <stdio.h>

int func(int n)
{
	if(n==1||n==0)
	    return 1;
	else
	    return n*func(n-1);
 } 
 
 int main()
 {
 	
 	int n;
 	printf("输入n：");
	scanf("%d",&n);
	while(n<1||n>20)
	{
		printf("重新输入：");
		scanf("%d",&n);
	}
	int s;
	s=func(n);
	printf("%d",s); 
 }
 
 

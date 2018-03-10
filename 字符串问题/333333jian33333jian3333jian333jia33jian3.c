/*
6.函数long fun(int a,int  n)的功能是：求s=aa..aa-.......-aaa-aa-a（此处a和n的值均在[1，9]范围内，aa..aa表示n个a）。例如： a=3,n=6,则以上表达式为s=333333-33333-3333-333-33-3,fun(3,6)的返回值为296298。
请勿修改主函数和其他函数；请直接在函数fun的{}中输入内容。


*/   

#include <stdio.h>
#include<math.h>
double fun(int a,int n)
{
	double sum=0,x=0;  //必须初始化 
	int i;
	for(i=0;i<n;i++)
	{
		x+=-a*pow(10,i);   //每一项 都在前一项的基础上生成 
		if(i==n-1)  x=-x;  //必须最后一次变号，如果前面变号是明显错误的 
		sum+=x;
	}
	return sum;
}
void main(void)
{
 printf("the result is %.0lf\n",fun(3,6));
}


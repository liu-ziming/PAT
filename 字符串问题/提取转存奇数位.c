/*
8.函数void  fun(long  s,long  *t)的功能是：
从低位开始取出正数s中奇数位上的数，
依次构成一个新的数，存放在t中。
例如，s为7654321时，t中的数为：7531。
请勿修改主函数和其他函数；请直接在函数fun的{}中输入内容。

提取奇数位数字
*/

#include <stdio.h>
#include <math.h>

int func(int n)
{
	long t=0,m=0;
	int i=0;
	while(n)
	{
		m=n%10;
		n/=100;    //****
		t+=m*pow(10,i);
		i++; 
	}
	printf("%ld",t);
}

int main()
{
	long n;
	scanf("%ld",&n);
	func(n);
	
	
	
 } 

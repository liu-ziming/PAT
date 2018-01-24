//2、设 a、b、c 均是 0 到 9 之间的数字，abc、bcc 是 两个三位数，且有：abc+bcc=532。
//求满足条件的所有 a、b、c 的值。

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("满足条件的ABC为 ：\n"); 
	for(a=0;a<=9;a++)
	    for(b=0;b<=9;b++)
	        for(c=0;c<=9;c++)
	            if((100*a+10*b+c)+(100*b+10*c+c)==532)
	                printf("a=%d b=%d c=%d",a,b,c);
}

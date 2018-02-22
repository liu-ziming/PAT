/*  长整数分离成两个 短整数   
 0x123456    分为0x12 和0x3456
*/

#include <stdio.h>
void parts(long x,short *high, short *low)
{
	union{
		unsigned short part[2];
		unsigned long w;
	}z;
	z.w=x;
	*high=z.part[1];
	*low=z.part[0];
}
int main()
{
	
	unsigned long x;
	unsigned short m,n;
	scanf("%x",&x);
	parts(x,&m,&n);
	printf("gaowei: %x\n diwei: %x \n",m,n);
}






 

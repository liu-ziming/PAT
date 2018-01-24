/*编写程序， 计算下列分段函数 y=f(x)的值。 y= -x+2.5 0<= x <2 y=2-1.5(x-3)(x-3) 2<= x <4 y=x/2-1.5 4<=x<6 
**/


//注意类型为double 
 #include <stdio.h>
 
int main()
{
	double x,y;
    scanf("%lf",&x);
    if(x>=0&&x<2)
    {
    	y=-x+2.5;
    	printf("%lf",y);
	}
	else if(x<4)
	{
		y=2-1.5*(x-3)*(x-3);
		printf("%lf",y);
	}
	else if(x<6)
	{
		y=x/2-1.5;
		printf("%lf",y);
	}
	
}

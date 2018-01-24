/*递归 

1-一个小球，从高为 H 的地方下落，下落弹地之后 弹起高度为下落时的一半，比如第一次弹起高度为 H/2，如此往复，计算从小球 H 高度下落到第 n 次 弹地往返的总路程。

要求： 1。用递归的方法实现 2。输入 H 和 n,输出结果 3。注意程序的健壮性 4。可以用 C 或 C++ 实现 
*/

#include <stdio.h>

double func(double n,double H)
{
	if(n==1)
	    return H+0.5*H;  //第n次的 
	else
	    return 1.5*H+func(n-1,H/2);
	
 } 
// h+h/2  >> h+h/2 +(h/2)*(1.5）>> h+h/2 +(h/2)*(1.5）+(h/4)*1.5 
int main()
{
	double n,H;
	scanf("%lf%lf",&n,&H);
	if(H==0||n<1)
	    return ;
	int i;double sum=0;
	
    sum=func(n,H); 
	printf("%.2lf",sum);
}


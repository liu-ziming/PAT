//3-计算时钟的夹角

#include <stdio.h>
#include <math.h>
int main()
{
	int hour,minu;
	scanf("%d%d",&hour,&minu);
	float hour_degree,minu_degree;
	minu_degree = (float)minu*6;
	hour_degree = (hour%12 + (float)minu/60)*30;  //分钟转化为小时， 12点时为0 
	float delta;
	delta = fabs(minu_degree - hour_degree);
	printf("%.1f",delta);
	
	
}

//3-����ʱ�ӵļн�

#include <stdio.h>
#include <math.h>
int main()
{
	int hour,minu;
	scanf("%d%d",&hour,&minu);
	float hour_degree,minu_degree;
	minu_degree = (float)minu*6;
	hour_degree = (hour%12 + (float)minu/60)*30;  //����ת��ΪСʱ�� 12��ʱΪ0 
	float delta;
	delta = fabs(minu_degree - hour_degree);
	printf("%.1f",delta);
	
	
}

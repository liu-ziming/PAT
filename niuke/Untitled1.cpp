

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double jiecheng(int i){
	if(i==1) return 1;
	else return i*jiecheng(i-1);
}
int main()
{
	double x;
	double cos=1;
	int k=-1;
	double s;//ГїТ»По
	int i=2;
	scanf("%lf",&x);
	do{
		s=pow(x,i)/jiecheng(i);
		s=s*k;
		cos+=s;
		k=-k;
		i=i+2;
	}while(fabs(s)>0.0001);
	printf("%.0lf",cos);
	
	
	
}
